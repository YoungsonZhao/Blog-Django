(function($) {

	skel.breakpoints({
		desktop: '(min-width: 537px)',
		wide: '(min-width: 1001px)',
		narrow: '(min-width: 537px) and (max-width: 1000px)',
		narrower: '(min-width: 537px) and (max-width: 800px)',
		mobile: '(max-width: 536px)'});

	$(function() {
		var	$window = $(window), $body = $('body'), $document = $(document);

		// Disable animations/transitions until the page has loaded.
		$body.addClass('is-loading');
		$window.on('load', function() {$body.removeClass('is-loading');});

		// Fix: Placeholder polyfill.
		$('form').placeholder();

		// Prioritize "important" elements on mobile.
		skel.on('+mobile -mobile', function() {$.prioritize('.important\\28 mobile\\29', skel.breakpoint('mobile').active);});

		// Off-Canvas Sidebar.

		// Height hack.
		var $sc = $('#sidebar, #content'), tid;

		$window.on('resize', function() {
				window.clearTimeout(tid);
				tid = window.setTimeout(function() {$sc.css('min-height', $document.height());}, 100);})
		       .on('load', function() {$window.trigger('resize');}).trigger('resize');

		// Title Bar.
                $('<div class="titleBar">' + '<a href="#sidebar" class="toggle"></a>' + '<span class="title">' + $('#logo').html() + '</span>' + '</div>').appendTo($body);
                var doc_height = $(document).height();
                var window_height = $(window).height();
		$(window).scroll(function(){
			var before = $(window).scrollTop();
                        if(before==0){
                        };
			$(window).scroll(function() {
			    var after = $(window).scrollTop();
			    if (before<after && after > 64) {
                                $('.titleBar').addClass('hiddened');
			    }
                            else{
                                $('.titleBar').removeClass('hiddened');
                            };
			    if (before>after && Math.abs(after + window_height - doc_height) > 128) {
                                $('.titleBar').addClass('showed');
			    }
                            else{
                                $('.titleBar').removeClass('showed');
                                $('.titleBar').addClass('hiddened');
                            };
                            if (after + window_height >= doc_height){
                                $('.titleBar').addClass('hiddened');
                            };
                            if (after < 64){
                                $('.titleBar').removeClass('hiddened');
                                $('.titleBar').addClass('showed');
                            };
			    before = after;
			});
		}); 


		// Sidebar
		$('#sidebar').panel({
				delay: 500,
				hideOnClick: true,
				hideOnSwipe: true,
				resetScroll: true,
				resetForms: true,
				side: 'left',
				target: $body,
				visibleClass: 'sidebar-visible'});

		// Fix: Remove navPanel transitions on WP<10 (poor/buggy performance).
		if (skel.vars.os == 'wp' && skel.vars.osVersion < 10)
			$('#titleBar, #sidebar, #main').css('transition', 'none');

	});

})(jQuery);
