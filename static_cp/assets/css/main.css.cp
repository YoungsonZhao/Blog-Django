@import url("font-awesome.min.css");
@import url("https://fonts.googleapis.com/css?family=Source+Sans+Pro:400,400italic,700|Open+Sans+Condensed:300,700");

/*
	Striped by HTML5 UP
	html5up.net | @ajlkn
	Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)
*/

/* Reset */

	html, body, div, span, applet, object, iframe, h1, h2, h3, h4, h5, h6, p, blockquote, pre, a, abbr, acronym, address, big, cite, code, del, dfn, em, img, ins, kbd, q, s, samp, small, strike, strong, sub, sup, tt, var, b, u, i, center, dl, dt, dd, ol, ul, li, fieldset, form, label, legend, table, caption, tbody, tfoot, thead, tr, th, td, article, aside, canvas, details, embed, figure, figcaption, footer, header, hgroup, menu, nav, output, ruby, section, summary, time, mark, audio, video {
		margin: 0;
		padding: 0;
		border: 0;
		font-size: 100%;
		font: inherit;
		vertical-align: baseline;
	}

	article, aside, details, figcaption, figure, footer, header, hgroup, menu, nav, section {
		display: block;
	}

	body {
		line-height: 1;
	}

	ol, ul {
		list-style: none;
	}

	blockquote, q {
		quotes: none;
	}

	blockquote:before, blockquote:after, q:before, q:after {
		content: '';
		content: none;
	}

	table {
		border-collapse: collapse;
		border-spacing: 0;
	}

	body {
		-webkit-text-size-adjust: none;
	}

/* Box Model */

	*, *:before, *:after {
		-moz-box-sizing: border-box;
		-webkit-box-sizing: border-box;
		box-sizing: border-box;
	}

/* Containers */

	.container {
		margin-left: auto;
		margin-right: auto;
	}

	.container.\31 25\25 {
		width: 100%;
		max-width: 125%;
		min-width: 100%;
	}

	.container.\37 5\25 {
		width: 75%;
	}

	.container.\35 0\25 {
		width: 50%;
	}

	.container.\32 5\25 {
		width: 25%;
	}

	.container {
		width: 100%;
	}

	@media screen and (min-width: 737px) {

		.container.\31 25\25 {
			width: 100%;
			max-width: 125%;
			min-width: 100%;
		}

		.container.\37 5\25 {
			width: 75%;
		}

		.container.\35 0\25 {
			width: 50%;
		}

		.container.\32 5\25 {
			width: 25%;
		}

		.container {
			width: 100%;
		}

	}

	@media screen and (min-width: 1201px) {

		.container.\31 25\25 {
			width: 100%;
			max-width: 125%;
			min-width: 100%;
		}

		.container.\37 5\25 {
			width: 75%;
		}

		.container.\35 0\25 {
			width: 50%;
		}

		.container.\32 5\25 {
			width: 25%;
		}

		.container {
			width: 100%;
		}

	}

	@media screen and (min-width: 737px) and (max-width: 1200px) {

		.container.\31 25\25 {
			width: 100%;
			max-width: 125%;
			min-width: 100%;
		}

		.container.\37 5\25 {
			width: 75%;
		}

		.container.\35 0\25 {
			width: 50%;
		}

		.container.\32 5\25 {
			width: 25%;
		}

		.container {
			width: 100%;
		}

	}

	@media screen and (min-width: 737px) and (max-width: 1000px) {

		.container.\31 25\25 {
			width: 100%;
			max-width: 125%;
			min-width: 100%;
		}

		.container.\37 5\25 {
			width: 75%;
		}

		.container.\35 0\25 {
			width: 50%;
		}

		.container.\32 5\25 {
			width: 25%;
		}

		.container {
			width: 100%;
		}

	}

	@media screen and (max-width: 736px) {

		.container.\31 25\25 {
			width: 100%;
			max-width: 125%;
			min-width: 100%;
		}

		.container.\37 5\25 {
			width: 75%;
		}

		.container.\35 0\25 {
			width: 50%;
		}

		.container.\32 5\25 {
			width: 25%;
		}

		.container {
			width: 100% !important;
		}

	}

/* Grid */

	.row {
		border-bottom: solid 1px transparent;
		-moz-box-sizing: border-box;
		-webkit-box-sizing: border-box;
		box-sizing: border-box;
	}

	.row > * {
		float: left;
		-moz-box-sizing: border-box;
		-webkit-box-sizing: border-box;
		box-sizing: border-box;
	}

	.row:after, .row:before {
		content: '';
		display: block;
		clear: both;
		height: 0;
	}

	.row.uniform > * > :first-child {
		margin-top: 0;
	}

	.row.uniform > * > :last-child {
		margin-bottom: 0;
	}

	.row.\30 \25 > * {
		padding: 0px 0 0 0px;
	}

	.row.\30 \25 {
		margin: 0px 0 -1px 0px;
	}

	.row.uniform.\30 \25 > * {
		padding: 0px 0 0 0px;
	}

	.row.uniform.\30 \25 {
		margin: 0px 0 -1px 0px;
	}

	.row > * {
		padding: 50px 0 0 50px;
	}

	.row {
		margin: -50px 0 -1px -50px;
	}

	.row.uniform > * {
		padding: 50px 0 0 50px;
	}

	.row.uniform {
		margin: -50px 0 -1px -50px;
	}

	.row.\32 00\25 > * {
		padding: 100px 0 0 100px;
	}

	.row.\32 00\25 {
		margin: -100px 0 -1px -100px;
	}

	.row.uniform.\32 00\25 > * {
		padding: 100px 0 0 100px;
	}

	.row.uniform.\32 00\25 {
		margin: -100px 0 -1px -100px;
	}

	.row.\31 50\25 > * {
		padding: 75px 0 0 75px;
	}

	.row.\31 50\25 {
		margin: -75px 0 -1px -75px;
	}

	.row.uniform.\31 50\25 > * {
		padding: 75px 0 0 75px;
	}

	.row.uniform.\31 50\25 {
		margin: -75px 0 -1px -75px;
	}

	.row.\35 0\25 > * {
		padding: 25px 0 0 25px;
	}

	.row.\35 0\25 {
		margin: -25px 0 -1px -25px;
	}

	.row.uniform.\35 0\25 > * {
		padding: 25px 0 0 25px;
	}

	.row.uniform.\35 0\25 {
		margin: -25px 0 -1px -25px;
	}

	.row.\32 5\25 > * {
		padding: 12.5px 0 0 12.5px;
	}

	.row.\32 5\25 {
		margin: -12.5px 0 -1px -12.5px;
	}

	.row.uniform.\32 5\25 > * {
		padding: 12.5px 0 0 12.5px;
	}

	.row.uniform.\32 5\25 {
		margin: -12.5px 0 -1px -12.5px;
	}

	.\31 2u, .\31 2u\24 {
		width: 100%;
		clear: none;
		margin-left: 0;
	}

	.\31 1u, .\31 1u\24 {
		width: 91.6666666667%;
		clear: none;
		margin-left: 0;
	}

	.\31 0u, .\31 0u\24 {
		width: 83.3333333333%;
		clear: none;
		margin-left: 0;
	}

	.\39 u, .\39 u\24 {
		width: 75%;
		clear: none;
		margin-left: 0;
	}

	.\38 u, .\38 u\24 {
		width: 66.6666666667%;
		clear: none;
		margin-left: 0;
	}

	.\37 u, .\37 u\24 {
		width: 58.3333333333%;
		clear: none;
		margin-left: 0;
	}

	.\36 u, .\36 u\24 {
		width: 50%;
		clear: none;
		margin-left: 0;
	}

	.\35 u, .\35 u\24 {
		width: 41.6666666667%;
		clear: none;
		margin-left: 0;
	}

	.\34 u, .\34 u\24 {
		width: 33.3333333333%;
		clear: none;
		margin-left: 0;
	}

	.\33 u, .\33 u\24 {
		width: 25%;
		clear: none;
		margin-left: 0;
	}

	.\32 u, .\32 u\24 {
		width: 16.6666666667%;
		clear: none;
		margin-left: 0;
	}

	.\31 u, .\31 u\24 {
		width: 8.3333333333%;
		clear: none;
		margin-left: 0;
	}

	.\31 2u\24 + *,
	.\31 1u\24 + *,
	.\31 0u\24 + *,
	.\39 u\24 + *,
	.\38 u\24 + *,
	.\37 u\24 + *,
	.\36 u\24 + *,
	.\35 u\24 + *,
	.\34 u\24 + *,
	.\33 u\24 + *,
	.\32 u\24 + *,
	.\31 u\24 + * {
		clear: left;
	}

	.\-11u {
		margin-left: 91.66667%;
	}

	.\-10u {
		margin-left: 83.33333%;
	}

	.\-9u {
		margin-left: 75%;
	}

	.\-8u {
		margin-left: 66.66667%;
	}

	.\-7u {
		margin-left: 58.33333%;
	}

	.\-6u {
		margin-left: 50%;
	}

	.\-5u {
		margin-left: 41.66667%;
	}

	.\-4u {
		margin-left: 33.33333%;
	}

	.\-3u {
		margin-left: 25%;
	}

	.\-2u {
		margin-left: 16.66667%;
	}

	.\-1u {
		margin-left: 8.33333%;
	}

	@media screen and (min-width: 737px) {

		.row > * {
			padding: 50px 0 0 50px;
		}

		.row {
			margin: -50px 0 -1px -50px;
		}

		.row.uniform > * {
			padding: 50px 0 0 50px;
		}

		.row.uniform {
			margin: -50px 0 -1px -50px;
		}

		.row.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.uniform.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.uniform.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.uniform.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.uniform.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.uniform.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.uniform.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.row.uniform.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.uniform.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.\31 2u\28desktop\29, .\31 2u\24\28desktop\29 {
			width: 100%;
			clear: none;
			margin-left: 0;
		}

		.\31 1u\28desktop\29, .\31 1u\24\28desktop\29 {
			width: 91.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 0u\28desktop\29, .\31 0u\24\28desktop\29 {
			width: 83.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\39 u\28desktop\29, .\39 u\24\28desktop\29 {
			width: 75%;
			clear: none;
			margin-left: 0;
		}

		.\38 u\28desktop\29, .\38 u\24\28desktop\29 {
			width: 66.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\37 u\28desktop\29, .\37 u\24\28desktop\29 {
			width: 58.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\36 u\28desktop\29, .\36 u\24\28desktop\29 {
			width: 50%;
			clear: none;
			margin-left: 0;
		}

		.\35 u\28desktop\29, .\35 u\24\28desktop\29 {
			width: 41.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\34 u\28desktop\29, .\34 u\24\28desktop\29 {
			width: 33.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\33 u\28desktop\29, .\33 u\24\28desktop\29 {
			width: 25%;
			clear: none;
			margin-left: 0;
		}

		.\32 u\28desktop\29, .\32 u\24\28desktop\29 {
			width: 16.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 u\28desktop\29, .\31 u\24\28desktop\29 {
			width: 8.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\31 2u\24\28desktop\29 + *,
		.\31 1u\24\28desktop\29 + *,
		.\31 0u\24\28desktop\29 + *,
		.\39 u\24\28desktop\29 + *,
		.\38 u\24\28desktop\29 + *,
		.\37 u\24\28desktop\29 + *,
		.\36 u\24\28desktop\29 + *,
		.\35 u\24\28desktop\29 + *,
		.\34 u\24\28desktop\29 + *,
		.\33 u\24\28desktop\29 + *,
		.\32 u\24\28desktop\29 + *,
		.\31 u\24\28desktop\29 + * {
			clear: left;
		}

		.\-11u\28desktop\29 {
			margin-left: 91.66667%;
		}

		.\-10u\28desktop\29 {
			margin-left: 83.33333%;
		}

		.\-9u\28desktop\29 {
			margin-left: 75%;
		}

		.\-8u\28desktop\29 {
			margin-left: 66.66667%;
		}

		.\-7u\28desktop\29 {
			margin-left: 58.33333%;
		}

		.\-6u\28desktop\29 {
			margin-left: 50%;
		}

		.\-5u\28desktop\29 {
			margin-left: 41.66667%;
		}

		.\-4u\28desktop\29 {
			margin-left: 33.33333%;
		}

		.\-3u\28desktop\29 {
			margin-left: 25%;
		}

		.\-2u\28desktop\29 {
			margin-left: 16.66667%;
		}

		.\-1u\28desktop\29 {
			margin-left: 8.33333%;
		}

	}

	@media screen and (min-width: 1201px) {

		.row > * {
			padding: 50px 0 0 50px;
		}

		.row {
			margin: -50px 0 -1px -50px;
		}

		.row.uniform > * {
			padding: 50px 0 0 50px;
		}

		.row.uniform {
			margin: -50px 0 -1px -50px;
		}

		.row.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.uniform.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.uniform.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.uniform.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.uniform.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.uniform.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.uniform.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.row.uniform.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.uniform.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.\31 2u\28wide\29, .\31 2u\24\28wide\29 {
			width: 100%;
			clear: none;
			margin-left: 0;
		}

		.\31 1u\28wide\29, .\31 1u\24\28wide\29 {
			width: 91.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 0u\28wide\29, .\31 0u\24\28wide\29 {
			width: 83.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\39 u\28wide\29, .\39 u\24\28wide\29 {
			width: 75%;
			clear: none;
			margin-left: 0;
		}

		.\38 u\28wide\29, .\38 u\24\28wide\29 {
			width: 66.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\37 u\28wide\29, .\37 u\24\28wide\29 {
			width: 58.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\36 u\28wide\29, .\36 u\24\28wide\29 {
			width: 50%;
			clear: none;
			margin-left: 0;
		}

		.\35 u\28wide\29, .\35 u\24\28wide\29 {
			width: 41.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\34 u\28wide\29, .\34 u\24\28wide\29 {
			width: 33.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\33 u\28wide\29, .\33 u\24\28wide\29 {
			width: 25%;
			clear: none;
			margin-left: 0;
		}

		.\32 u\28wide\29, .\32 u\24\28wide\29 {
			width: 16.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 u\28wide\29, .\31 u\24\28wide\29 {
			width: 8.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\31 2u\24\28wide\29 + *,
		.\31 1u\24\28wide\29 + *,
		.\31 0u\24\28wide\29 + *,
		.\39 u\24\28wide\29 + *,
		.\38 u\24\28wide\29 + *,
		.\37 u\24\28wide\29 + *,
		.\36 u\24\28wide\29 + *,
		.\35 u\24\28wide\29 + *,
		.\34 u\24\28wide\29 + *,
		.\33 u\24\28wide\29 + *,
		.\32 u\24\28wide\29 + *,
		.\31 u\24\28wide\29 + * {
			clear: left;
		}

		.\-11u\28wide\29 {
			margin-left: 91.66667%;
		}

		.\-10u\28wide\29 {
			margin-left: 83.33333%;
		}

		.\-9u\28wide\29 {
			margin-left: 75%;
		}

		.\-8u\28wide\29 {
			margin-left: 66.66667%;
		}

		.\-7u\28wide\29 {
			margin-left: 58.33333%;
		}

		.\-6u\28wide\29 {
			margin-left: 50%;
		}

		.\-5u\28wide\29 {
			margin-left: 41.66667%;
		}

		.\-4u\28wide\29 {
			margin-left: 33.33333%;
		}

		.\-3u\28wide\29 {
			margin-left: 25%;
		}

		.\-2u\28wide\29 {
			margin-left: 16.66667%;
		}

		.\-1u\28wide\29 {
			margin-left: 8.33333%;
		}

	}

	@media screen and (min-width: 737px) and (max-width: 1200px) {

		.row > * {
			padding: 50px 0 0 50px;
		}

		.row {
			margin: -50px 0 -1px -50px;
		}

		.row.uniform > * {
			padding: 50px 0 0 50px;
		}

		.row.uniform {
			margin: -50px 0 -1px -50px;
		}

		.row.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.uniform.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.uniform.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.uniform.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.uniform.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.uniform.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.uniform.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.row.uniform.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.uniform.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.\31 2u\28narrow\29, .\31 2u\24\28narrow\29 {
			width: 100%;
			clear: none;
			margin-left: 0;
		}

		.\31 1u\28narrow\29, .\31 1u\24\28narrow\29 {
			width: 91.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 0u\28narrow\29, .\31 0u\24\28narrow\29 {
			width: 83.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\39 u\28narrow\29, .\39 u\24\28narrow\29 {
			width: 75%;
			clear: none;
			margin-left: 0;
		}

		.\38 u\28narrow\29, .\38 u\24\28narrow\29 {
			width: 66.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\37 u\28narrow\29, .\37 u\24\28narrow\29 {
			width: 58.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\36 u\28narrow\29, .\36 u\24\28narrow\29 {
			width: 50%;
			clear: none;
			margin-left: 0;
		}

		.\35 u\28narrow\29, .\35 u\24\28narrow\29 {
			width: 41.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\34 u\28narrow\29, .\34 u\24\28narrow\29 {
			width: 33.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\33 u\28narrow\29, .\33 u\24\28narrow\29 {
			width: 25%;
			clear: none;
			margin-left: 0;
		}

		.\32 u\28narrow\29, .\32 u\24\28narrow\29 {
			width: 16.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 u\28narrow\29, .\31 u\24\28narrow\29 {
			width: 8.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\31 2u\24\28narrow\29 + *,
		.\31 1u\24\28narrow\29 + *,
		.\31 0u\24\28narrow\29 + *,
		.\39 u\24\28narrow\29 + *,
		.\38 u\24\28narrow\29 + *,
		.\37 u\24\28narrow\29 + *,
		.\36 u\24\28narrow\29 + *,
		.\35 u\24\28narrow\29 + *,
		.\34 u\24\28narrow\29 + *,
		.\33 u\24\28narrow\29 + *,
		.\32 u\24\28narrow\29 + *,
		.\31 u\24\28narrow\29 + * {
			clear: left;
		}

		.\-11u\28narrow\29 {
			margin-left: 91.66667%;
		}

		.\-10u\28narrow\29 {
			margin-left: 83.33333%;
		}

		.\-9u\28narrow\29 {
			margin-left: 75%;
		}

		.\-8u\28narrow\29 {
			margin-left: 66.66667%;
		}

		.\-7u\28narrow\29 {
			margin-left: 58.33333%;
		}

		.\-6u\28narrow\29 {
			margin-left: 50%;
		}

		.\-5u\28narrow\29 {
			margin-left: 41.66667%;
		}

		.\-4u\28narrow\29 {
			margin-left: 33.33333%;
		}

		.\-3u\28narrow\29 {
			margin-left: 25%;
		}

		.\-2u\28narrow\29 {
			margin-left: 16.66667%;
		}

		.\-1u\28narrow\29 {
			margin-left: 8.33333%;
		}

	}

	@media screen and (min-width: 737px) and (max-width: 1000px) {

		.row > * {
			padding: 50px 0 0 50px;
		}

		.row {
			margin: -50px 0 -1px -50px;
		}

		.row.uniform > * {
			padding: 50px 0 0 50px;
		}

		.row.uniform {
			margin: -50px 0 -1px -50px;
		}

		.row.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.uniform.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.uniform.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.uniform.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.uniform.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.uniform.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.uniform.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.row.uniform.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.uniform.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.\31 2u\28narrower\29, .\31 2u\24\28narrower\29 {
			width: 100%;
			clear: none;
			margin-left: 0;
		}

		.\31 1u\28narrower\29, .\31 1u\24\28narrower\29 {
			width: 91.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 0u\28narrower\29, .\31 0u\24\28narrower\29 {
			width: 83.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\39 u\28narrower\29, .\39 u\24\28narrower\29 {
			width: 75%;
			clear: none;
			margin-left: 0;
		}

		.\38 u\28narrower\29, .\38 u\24\28narrower\29 {
			width: 66.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\37 u\28narrower\29, .\37 u\24\28narrower\29 {
			width: 58.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\36 u\28narrower\29, .\36 u\24\28narrower\29 {
			width: 50%;
			clear: none;
			margin-left: 0;
		}

		.\35 u\28narrower\29, .\35 u\24\28narrower\29 {
			width: 41.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\34 u\28narrower\29, .\34 u\24\28narrower\29 {
			width: 33.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\33 u\28narrower\29, .\33 u\24\28narrower\29 {
			width: 25%;
			clear: none;
			margin-left: 0;
		}

		.\32 u\28narrower\29, .\32 u\24\28narrower\29 {
			width: 16.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 u\28narrower\29, .\31 u\24\28narrower\29 {
			width: 8.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\31 2u\24\28narrower\29 + *,
		.\31 1u\24\28narrower\29 + *,
		.\31 0u\24\28narrower\29 + *,
		.\39 u\24\28narrower\29 + *,
		.\38 u\24\28narrower\29 + *,
		.\37 u\24\28narrower\29 + *,
		.\36 u\24\28narrower\29 + *,
		.\35 u\24\28narrower\29 + *,
		.\34 u\24\28narrower\29 + *,
		.\33 u\24\28narrower\29 + *,
		.\32 u\24\28narrower\29 + *,
		.\31 u\24\28narrower\29 + * {
			clear: left;
		}

		.\-11u\28narrower\29 {
			margin-left: 91.66667%;
		}

		.\-10u\28narrower\29 {
			margin-left: 83.33333%;
		}

		.\-9u\28narrower\29 {
			margin-left: 75%;
		}

		.\-8u\28narrower\29 {
			margin-left: 66.66667%;
		}

		.\-7u\28narrower\29 {
			margin-left: 58.33333%;
		}

		.\-6u\28narrower\29 {
			margin-left: 50%;
		}

		.\-5u\28narrower\29 {
			margin-left: 41.66667%;
		}

		.\-4u\28narrower\29 {
			margin-left: 33.33333%;
		}

		.\-3u\28narrower\29 {
			margin-left: 25%;
		}

		.\-2u\28narrower\29 {
			margin-left: 16.66667%;
		}

		.\-1u\28narrower\29 {
			margin-left: 8.33333%;
		}

	}

	@media screen and (max-width: 736px) {

		.row > * {
			padding: 50px 0 0 50px;
		}

		.row {
			margin: -50px 0 -1px -50px;
		}

		.row.uniform > * {
			padding: 50px 0 0 50px;
		}

		.row.uniform {
			margin: -50px 0 -1px -50px;
		}

		.row.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.uniform.\32 00\25 > * {
			padding: 100px 0 0 100px;
		}

		.row.uniform.\32 00\25 {
			margin: -100px 0 -1px -100px;
		}

		.row.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.uniform.\31 50\25 > * {
			padding: 75px 0 0 75px;
		}

		.row.uniform.\31 50\25 {
			margin: -75px 0 -1px -75px;
		}

		.row.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.uniform.\35 0\25 > * {
			padding: 25px 0 0 25px;
		}

		.row.uniform.\35 0\25 {
			margin: -25px 0 -1px -25px;
		}

		.row.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.row.uniform.\32 5\25 > * {
			padding: 12.5px 0 0 12.5px;
		}

		.row.uniform.\32 5\25 {
			margin: -12.5px 0 -1px -12.5px;
		}

		.\31 2u\28mobile\29, .\31 2u\24\28mobile\29 {
			width: 100%;
			clear: none;
			margin-left: 0;
		}

		.\31 1u\28mobile\29, .\31 1u\24\28mobile\29 {
			width: 91.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 0u\28mobile\29, .\31 0u\24\28mobile\29 {
			width: 83.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\39 u\28mobile\29, .\39 u\24\28mobile\29 {
			width: 75%;
			clear: none;
			margin-left: 0;
		}

		.\38 u\28mobile\29, .\38 u\24\28mobile\29 {
			width: 66.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\37 u\28mobile\29, .\37 u\24\28mobile\29 {
			width: 58.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\36 u\28mobile\29, .\36 u\24\28mobile\29 {
			width: 50%;
			clear: none;
			margin-left: 0;
		}

		.\35 u\28mobile\29, .\35 u\24\28mobile\29 {
			width: 41.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\34 u\28mobile\29, .\34 u\24\28mobile\29 {
			width: 33.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\33 u\28mobile\29, .\33 u\24\28mobile\29 {
			width: 25%;
			clear: none;
			margin-left: 0;
		}

		.\32 u\28mobile\29, .\32 u\24\28mobile\29 {
			width: 16.6666666667%;
			clear: none;
			margin-left: 0;
		}

		.\31 u\28mobile\29, .\31 u\24\28mobile\29 {
			width: 8.3333333333%;
			clear: none;
			margin-left: 0;
		}

		.\31 2u\24\28mobile\29 + *,
		.\31 1u\24\28mobile\29 + *,
		.\31 0u\24\28mobile\29 + *,
		.\39 u\24\28mobile\29 + *,
		.\38 u\24\28mobile\29 + *,
		.\37 u\24\28mobile\29 + *,
		.\36 u\24\28mobile\29 + *,
		.\35 u\24\28mobile\29 + *,
		.\34 u\24\28mobile\29 + *,
		.\33 u\24\28mobile\29 + *,
		.\32 u\24\28mobile\29 + *,
		.\31 u\24\28mobile\29 + * {
			clear: left;
		}

		.\-11u\28mobile\29 {
			margin-left: 91.66667%;
		}

		.\-10u\28mobile\29 {
			margin-left: 83.33333%;
		}

		.\-9u\28mobile\29 {
			margin-left: 75%;
		}

		.\-8u\28mobile\29 {
			margin-left: 66.66667%;
		}

		.\-7u\28mobile\29 {
			margin-left: 58.33333%;
		}

		.\-6u\28mobile\29 {
			margin-left: 50%;
		}

		.\-5u\28mobile\29 {
			margin-left: 41.66667%;
		}

		.\-4u\28mobile\29 {
			margin-left: 33.33333%;
		}

		.\-3u\28mobile\29 {
			margin-left: 25%;
		}

		.\-2u\28mobile\29 {
			margin-left: 16.66667%;
		}

		.\-1u\28mobile\29 {
			margin-left: 8.33333%;
		}

	}

/* Basic */

	body {
		background-color: #e8e8e8;
		background-image: url("images/bg02.png");
		font-family: 'Source Sans Pro', sans-serif;
		font-weight: 400;
		color: #565656;
	}

		body.is-loading * {
			-moz-transition: none !important;
			-webkit-transition: none !important;
			-ms-transition: none !important;
			transition: none !important;
			-moz-animation: none !important;
			-webkit-animation: none !important;
			-ms-animation: none !important;
			animation: none !important;
		}

	input, textarea, select {
		font-family: 'Source Sans Pro', sans-serif;
		font-weight: 400;
		color: #565656;
	}

	a {
		color: #c94663;
	}

	strong, b {
		font-weight: 700;
		color: #232323;
	}

	h2, h3 {
		font-family: 'Open Sans Condensed', sans-serif;
		font-weight: 700;
		color: #232323;
	}

	h4, h5, h6 {
		font-family: 'Open Sans Condensed', sans-serif;
		font-weight: 600;
		color: #232323;
	}

	h2 a, h4 a, h5 a, h6 a {
		text-decoration: none;
		color: inherit;
	}

	blockquote {
		border-left: solid 5px #ddd;
		padding: 1em 0 1em 2em;
		font-style: italic;
	}

	em, i {
		font-style: italic;
	}

	hr {
		border: 0;
		border-top: solid 1px #ddd;
		padding: 1.5em 0 0 0;
		margin: 1.75em 0 0 0;
	}

	sub {
		position: relative;
		top: 0.5em;
		font-size: 0.8em;
	}

	sup {
		position: relative;
		top: -0.5em;
		font-size: 0.8em;
	}

	br.clear {
		clear: both;
	}

	p, ul, ol, dl {
		margin-bottom: 1em;
	}

  p {
    text-align: justify;
  }

/* Table */

	table {
		margin-bottom: 1em;
		width: 100%;
	}

		table.default tbody tr:nth-child(2n+2) {
			background: #f4f4f4;
		}

		table.default td {
			padding: 0.5em 1em 0.5em 1em;
		}

		table.default th {
			text-align: left;
			font-weight: 700;
			padding: 0.75em 1em 0.75em 1em;
		}

		table.default thead {
			border-bottom: solid 1px #ddd;
		}

		table.default tfoot {
			border-top: solid 1px #ddd;
			background: #eee;
		}

/* Form */

	form label {
		font-family: 'Open Sans Condensed', sans-serif;
		font-weight: 700;
		color: #232323;
		margin: 0 0 0.75em 0;
	}

	form input[type="text"],
	form input[type="email"],
	form input[type="password"],
	form select,
	form textarea {
		display: block;
		border-radius: 0.4em;
		-webkit-appearance: none;
		border: solid 1px #ddd;
		padding: 0.5em 0.75em;
		width: 100%;
		line-height: 1.25em;
	}

		form input[type="text"]:focus,
		form input[type="email"]:focus,
		form input[type="password"]:focus,
		form select:focus,
		form textarea:focus {
			box-shadow: 0px 0px 2px 2px #c94663;
		}

	form ::-webkit-input-placeholder {
		color: #aaa;
	}

	form :-moz-placeholder {
		color: #aaa;
	}

	form ::-moz-placeholder {
		color: #aaa;
	}

	form :-ms-input-placeholder {
		color: #aaa;
	}

/* Section/Article */

	header {
		margin: 0 0 2em 0;
	}

		header > p {
			font-family: 'Open Sans Condensed', sans-serif;
			font-weight: 300;
			display: block;
			margin-top: 1em;
			color: #999;
      text-align: justify;
		}

	section, article {
		margin-bottom: 3em;
	}

		section > :last-child,
		section > .inner > :last-child, section:last-child, article > :last-child,
		article > .inner > :last-child, article:last-child {
			margin-bottom: 0;
		}

/* Image */

	.image {
		display: inline-block;
	}

		.image img {
			display: block;
			width: 100%;
		}

		.image.fit {
			display: block;
			width: 100%;
		}

		.image.featured {
			display: block;
			width: 500px;
      text-align: center;
			margin: 0 0 2em 0;
		}

		.imagecover{
			display: block;
			width: 95%;
      text-align: center;
			margin: 0 auto 15px auto;
		}

		.image.left {
			float: left;
			margin: 0 2em 2em 0;
		}

		.image.centered {
			display: block;
			margin: 0 0 2em 0;
		}

			.image.centered img {
				margin: 0 auto;
				width: auto;
			}

/* Button */

	input[type="button"],
	input[type="submit"],
	input[type="reset"],
	button,
	.button {
		cursor: pointer;
		background-color: #c94663;
		background-image: url("images/bg01.png");
		border-radius: 0.4em;
		text-align: center;
		box-shadow: inset 0px 0px 0px 1px rgba(255, 255, 255, 0.15);
		color: #fff;
		font-family: 'Open Sans Condensed', sans-serif;
		font-weight: 700;
		text-decoration: none;
		-moz-transition: background-color .25s ease-in-out, color .25s ease-in-out;
		-webkit-transition: background-color .25s ease-in-out, color .25s ease-in-out;
		-ms-transition: background-color .25s ease-in-out, color .25s ease-in-out;
		transition: background-color .25s ease-in-out, color .25s ease-in-out;
		text-shadow: -1px -1px 0px rgba(0, 0, 0, 0.5);
	}

		input[type="button"]:disabled, input[type="button"].disabled,
		input[type="submit"]:disabled,
		input[type="submit"].disabled,
		input[type="reset"]:disabled,
		input[type="reset"].disabled,
		button:disabled,
		button.disabled,
		.button:disabled,
		.button.disabled {
			opacity: 0.35;
			cursor: default;
		}

		input[type="button"]:hover,
		input[type="submit"]:hover,
		input[type="reset"]:hover,
		button:hover,
		.button:hover {
			background-color: #d95673;
		}

		input[type="button"]:active,
		input[type="submit"]:active,
		input[type="reset"]:active,
		button:active,
		.button:active {
			background-color: #b93653;
		}

		input[type="button"].alt,
		input[type="submit"].alt,
		input[type="reset"].alt,
		button.alt,
		.button.alt {
			background-color: #364050;
		}

			input[type="button"].alt:hover,
			input[type="submit"].alt:hover,
			input[type="reset"].alt:hover,
			button.alt:hover,
			.button.alt:hover {
				background-color: #465060;
			}

			input[type="button"].alt:active,
			input[type="submit"].alt:active,
			input[type="reset"].alt:active,
			button.alt:active,
			.button.alt:active {
				background-color: #263040;
			}

/* List */

	ul.default {
		list-style: disc;
		padding-left: 1em;
	}

		ul.default li {
			padding-left: 0.5em;
		}

	ol.default {
		list-style: decimal;
		padding-left: 1.25em;
	}

		ol.default li {
			padding-left: 0.25em;
		}

/* Pagination */

	.pagination .pages {
		display: inline-block;
		font-family: 'Open Sans Condensed', sans-serif;
		font-weight: 700;
	}

		.pagination .pages span {
			display: inline-block;
			width: 1.5em;
			text-align: center;
			margin: 0 0.4em 0 0;
		}

		.pagination .pages a {
			cursor: pointer;
			display: inline-block;
			text-align: center;
			text-decoration: none;
			color: inherit;
			background-color: #e8e8e8;
			background-image: url("images/bg02.png");
			color: #565656;
			margin: 0 0.4em 0 0;
			border-radius: 0.4em;
			-moz-transition: background-color .25s ease-in-out;
			-webkit-transition: background-color .25s ease-in-out;
			-ms-transition: background-color .25s ease-in-out;
			transition: background-color .25s ease-in-out;
			box-shadow: inset 0 0.075em 0.25em 0 rgba(0, 0, 0, 0.1);
		}

			.pagination .pages a:hover {
				background-color: #ff6347;
			}

			.pagination .pages a.active {
				background-color: #364050;
				color: #fff;
				box-shadow: none;
				text-shadow: -1px -1px 0px rgba(0, 0, 0, 0.5);
			}

/* Box */

	.box.calendar .inner {
		position: relative;
		background-color: #272E39;
		background-color: rgba(0, 0, 0, 0.15);
		border-radius: 0.4em;
		padding: 0.25em 0.25em 0.25em 0.25em;
		box-shadow: 0 0 0 1px rgba(255, 255, 255, 0.05), inset 0 0 0.25em 0 rgba(0, 0, 0, 0.25);
	}

	.box.calendar caption {
		font-weight: 700;
		color: #fff;
		margin: 0 0 0.25em 0;
	}

	.box.calendar table {
		margin: 0 auto;
	}

	.box.calendar td {
		cursor: default;
		padding: 0.35em 0 0.35em 0;
		border-top: solid 1px rgba(0, 0, 0, 0.25);
		box-shadow: inset 0px 1px 0px 0px rgba(255, 255, 255, 0.075);
	}

	.box.calendar th {
		cursor: default;
		padding: 0.35em 0 0.35em 0;
		border-top: solid 1px rgba(0, 0, 0, 0.25);
		box-shadow: inset 0px 1px 0px 0px rgba(255, 255, 255, 0.075);
		font-weight: 700;
		color: #fff;
	}

	.box.calendar td a, .box.calendar td span {
		display: block;
		margin: 0 auto;
		width: 1.5em;
		height: 1.5em;
		text-align: center;
		line-height: 1.4em;
		border-radius: 0.4em;
		-moz-transition: background-color .25s ease-in-out;
		-webkit-transition: background-color .25s ease-in-out;
		-ms-transition: background-color .25s ease-in-out;
		transition: background-color .25s ease-in-out;
		text-decoration: none;
	}

	.box.calendar td a {
		color: #fff;
		font-weight: 700;
	}

		.box.calendar td a:hover {
			background-color: rgba(200, 225, 255, 0.1);
			color: #fff;
		}

	.box.calendar td.today a {
		background-color: #c94663;
		background-image: url("images/bg01.png");
		box-shadow: inset 0px 0px 0px 1px rgba(255, 255, 255, 0.15), 0 0.025em 0.15em 0em rgba(0, 0, 0, 0.25);
		color: #fff !important;
	}

	.box.post {
		position: relative;
	}

  .box.post p{
    text-align: justify;
    text-indent: 1em;
  }
        .box.post .photo{
         position: relative;
         margin-top:0px;
         margin-left: auto;
         margin-right: auto;
        }
        .box.post .code{
          position: relative;
          background-color: #eee;
          padding-left: 1em;
          font-weight: 700;
          margin-bottom: 15px;
        }

        .box.post .list{
          list-style:disc inside;
        }

        .box.post .photo .imgbox_9{margin: 0px; list-style-type:none;}
        .box.post .photo .imgbox_9:after{
         content: ".";
         display: block;
         line-height: 0;
         width:0;
         height: 0;
         clear: both;
         visibility: hidden;
         overflow: hidden;
        } 
        .box.post .photo .imgbox_9 li{
         float:left;
         width:30%;
         margin: 0px;
        }

        .box.post .photo .imgbox_9 li a,.imgbox_9 li a:visited{
         display:block;
         text-align: center;
         margin-left: 2px;
         margin-right: 3px;
         margin-top: -3px;
         margin-bottom: 0px;
         position: relative;
         z-index: 1;
        }
        .box.post .photo .imgbox_9 li a:hover{z-index: 2;}

        .box.post .photo .imgbox_4{margin-left: 0px; margin-right: 0px; margin-top: 0px;margin-bottom: 0px; list-style-type:none;}
        .box.post .photo .imgbox_4:after{
         content: ".";
         display: block;
         line-height: 0;
         width:0;
         height: 0;
         clear: both;
         visibility: hidden;
         overflow: hidden;
        } 
        .box.post .photo .imgbox_4 li{
         float:left;
         width:45%;
        }
        .box.post .photo .imgbox_4 li a,.imgbox_4 li a:visited{
         display:block;
         text-align: center;
         margin-left: 2px;
         margin-right: 3px;
         margin-top: -3px;
         margin-bottom: 0px;
         position: relative;
         z-index: 1;
        }
        .box.post .photo .imgbox_4 li a:hover{border-color: #f00;z-index: 2;}

        .box.post .imgbox_1{display: block; width: 90%; margin-left: 0px; margin-right: 0px; margin-top: 0px;margin-bottom: 0px; list-style-type:none;}
        .box.post .imgbox_1:after{
         content: ".";
         display: block;
         line-height: 0;
         clear: both;
         visibility: hidden;
         overflow: hidden;
        } 
        .box.post .imgbox_1 li{
         float:left;
         display: block;
         width:90%;
        }
        .box.post .imgbox_1 li a,.imgbox_1 li a:visited{
         display:block;
         width:90%;
         text-align: center;
         margin-left: 2px;
         margin-right: 3px;
         margin-top: -3px;
         margin-bottom: 0px;
         position: relative;
         z-index: 1;
        }
        .box.post .imgbox_1 li a:hover{border-color: #f00;z-index: 2;}
		.box.post .info .newinfo .stats {
			margin: 0;
			cursor: default;
		}

			.box.post .info .newinfo .stats a {
				font-size: 0.8em;
				text-decoration: none;
				color: #232323;
				font-weight: 700;
				line-height: 1em;
			}

	.box.recent-posts li {
		border-top: solid 1px rgba(0, 0, 0, 0.25);
		box-shadow: inset 0px 1px 0px 0px rgba(255, 255, 255, 0.075);
		padding: 0em 0 0em 0;
    line-height: 16px;
	}

		.box.recent-posts li:first-child {
			border-top: 0;
			box-shadow: none;
			padding-top: 0;
		}

		.box.recent-posts li:last-child {
			padding-bottom: 0;
		}

	.box.recent-comments li {
		border-top: solid 1px rgba(0, 0, 0, 0.25);
		box-shadow: inset 0px 1px 0px 0px rgba(255, 255, 255, 0.075);
		padding: 0.5em 0 0.5em 0;
	}

		.box.recent-comments li:first-child {
			border-top: 0;
			box-shadow: none;
			padding-top: 0;
		}

		.box.recent-comments li:last-child {
			padding-bottom: 0;
		}

	.box.search form {
		position: relative;
	}

		.box.search form input {
			position: relative;
			padding-right: 34px;
		}

		.box.search form:before {
			display: inline-block;
			font-family: FontAwesome;
			font-size: 18px;
			text-decoration: none;
			font-style: normal;
			font-weight: normal;
			-webkit-font-smoothing: antialiased;
			-moz-osx-font-smoothing: grayscale;
			content: '\f002';
			filter: progid:DXImageTransform.Microsoft.BasicImage(rotation=0, mirror=1);
			-moz-transform: scale(-1, 1);
			-webkit-transform: scale(-1, 1);
			-ms-transform: scale(-1, 1);
			transform: scale(-1, 1);
			position: absolute;
			right: 0.5em;
			top: 0.25em;
			z-index: 1;
			text-shadow: none;
			color: #c8ccce;
		}

	.box.text-style1 .inner {
		position: relative;
		background-color: #272E39;
		background-color: rgba(0, 0, 0, 0.15);
		border-radius: 0.4em;
		padding: 0.55em;
    line-height: 18px;
    font-size: 14px;
    text-align: justify;
		box-shadow: 0 0 0 1px rgba(255, 255, 255, 0.05), inset 0 0 0.25em 0 rgba(0, 0, 0, 0.25);
	}

/* Icons */

	.icon {
		position: relative;
		text-decoration: none;
	}

		.icon:before {
			-moz-osx-font-smoothing: grayscale;
			-webkit-font-smoothing: antialiased;
			font-family: FontAwesome;
			font-style: normal;
			font-weight: normal;
			text-transform: none !important;
		}

		.icon > .label {
			display: none;
		}

/* Nav */

	#nav > ul > li > ul {
		display: none;
	}

	#nav ul {
		margin: 0;
    font-size: 1.2em;
    font-weight: 700;
	}

	#nav li {
		border-top: solid 1px rgba(0, 0, 0, 0.25);
		box-shadow: inset 0px 1px 0px 0px rgba(255, 255, 255, 0.075);
		padding: 0.5em 0 0.4em 0;
    font-size: 1.2em;
    font-weight: 700;
	}

		#nav li:first-child {
			border: 0;
			box-shadow: none;
			padding-top: 0;
		}

		#nav li:last-child {
			padding-bottom: 0;
		}

		#nav li a {
			display: block;
			padding: 0.4em 0.75em 0.4em 0.75em;
			text-decoration: none;
			border-radius: 0.4em;
			outline: 0;
			-moz-transition: background-color .25s ease-in-out, color .25s ease-in-out;
			-webkit-transition: background-color .25s ease-in-out, color .25s ease-in-out;
			-ms-transition: background-color .25s ease-in-out, color .25s ease-in-out;
			transition: background-color .25s ease-in-out, color .25s ease-in-out;
      font-size: 1.15em;
      font-weight: 700;
		}

		#nav li.current a {
			background-color: #272E39 !important;
			background-color: rgba(0, 0, 0, 0.15) !important;
			box-shadow: 0 0 0 1px rgba(255, 255, 255, 0.05), inset 0 0 0.25em 0 rgba(0, 0, 0, 0.25);
			font-weight: 900;
      font-size: 1.15em;
			color: #fff;
		}

		#nav li:hover a {
			background-color: rgba(255, 255, 255, 0.25);
			color: #fff;
		}

/* Sidebar */

	#titleBar {
		-moz-backface-visibility: hidden;
		-webkit-backface-visibility: hidden;
		-ms-backface-visibility: hidden;
		backface-visibility: hidden;
		-moz-transition: -moz-transform 0.5s ease;
		-webkit-transition: -webkit-transform 0.5s ease;
		-ms-transition: -ms-transform 0.5s ease;
		transition: transform 0.5s ease;
		display: none;
		height: 62px;
    padding-top:8px;
    margin-top: 0px;
		left: 0;
		position: fixed;
		top: 0;
		width: 100%;
		z-index: 10001;
		background: #364050 url("images/bg01.png");
	}

		#titleBar .title {
			display: block;
			color: #fff;
			line-height: 44px;
			font-size: 1.25em;
			font-family: 'Open Sans Condensed', sans-serif;
			font-weight: 700;
			letter-spacing: 0.1em;
			text-shadow: -1px -1px 0px rgba(0, 0, 0, 0.5);
			box-shadow: 0px 1px 4px 0px rgba(0, 0, 0, 0.25);
			text-align: center;
		}

			#titleBar .title a {
				color: inherit;
				text-decoration: none;
			}

		#titleBar .toggle {
			width: 80px;
			height: 60px;
			position: absolute;
      margin-top: 7px;
      padding-top: 5px;
			top: 0;
			left: 0;
		}

			#titleBar .toggle:before {
				font-family: FontAwesome;
				text-decoration: none;
				font-style: normal;
				font-weight: normal;
				-webkit-font-smoothing: antialiased;
				-moz-osx-font-smoothing: grayscale;
				content: '\f00b';
				display: block;
				position: absolute;
				top: 7px;
				font-size: 24px;
        padding-top: 4px;
				width: 50px;
				height: 36px;
				line-height: 30px;
				background: #c94663 url("images/bg01.png");
				border-radius: 5px;
				color: #fff;
				text-align: center;
				box-shadow: inset 0px 0px 0px 1px rgba(255, 255, 255, 0.15), 0 0.025em 0.15em 0em rgba(0, 0, 0, 0.25);
				text-shadow: -1px -1px 0px rgba(0, 0, 0, 0.5);
				left: 7px;
			}

			#titleBar .toggle:active:before {
				background-color: #d95673;
			}

	#sidebar {
		color: #aaa;
		color: rgba(255, 255, 255, 0.55);
		text-shadow: -1px -1px 0px rgba(0, 0, 0, 0.5);
		width: 14em;
		padding: 3em 1.35em 1em 1.15em;
		background: #364050 url("images/bg01.png");
		overflow-y: auto;
		left: 0;
		box-shadow: inset -0.1em 0em 0.35em 0em rgba(0, 0, 0, 0.15);
	}

		#sidebar form input, #sidebar form select, #sidebar form textarea {
			border: 0;
		}

		#sidebar section, #sidebar nav {
			position: relative;
			margin: 2em 0 0 0;
			font-size: 0.9em;
		}

			#sidebar section:before, #sidebar nav:before {
				content: '';
				border-top: solid 1px;
				border-bottom: solid 1px;
				border-color: #171E29;
				border-color: rgba(0, 0, 0, 0.25);
				box-shadow: inset 0px 1px 0px 0px rgba(255, 255, 255, 0.075), 0px 1px 0px 0px rgba(255, 255, 255, 0.075);
				display: block;
				height: 0.5em;
				margin: 0 0 2em 0;
			}

		#sidebar strong, #sidebar b {
			color: #fff;
		}

		#sidebar a {
			color: #d4dde0;
		}

		#sidebar h2, #sidebar h3, #sidebar h4, #sidebar h5, #sidebar h6 {
			color: #fff;
		}

		#sidebar header {
			margin: 0 0 1.25em 0;
		}

/* Content */

	#content {
		position: relative;
		background-color: #fff;
		background-image: url("images/bg02.png");
	}

		#content > .inner {
			position: relative;
			z-index: 1;
		}

/* Copyright */

	#copyright {
		padding-bottom: 2em;
	}

		#copyright p {
			opacity: 0.75;
		}

		#copyright a {
			color: inherit !important;
		}

		#copyright:before {
			content: '';
			border-top: solid 1px;
			border-bottom: solid 1px;
			border-color: #171E29;
			border-color: rgba(0, 0, 0, 0.25);
			box-shadow: inset 0px 1px 0px 0px rgba(255, 255, 255, 0.075), 0px 1px 0px 0px rgba(255, 255, 255, 0.075);
			display: block;
		}

/* Desktop */

	@media screen and (min-width: 737px) {

		/* Basic */

			body {
				height: 100%;
				line-height: 1.75em;
			}

			input, textarea, select {
				line-height: 1.75em;
			}

			h2 {
				font-size: 1.2em;
			}

			h3 {
				font-size: 1.1em;
			}
       
			h4, h5, h6 {
				font-size: 1.1em;
			}
      p {
        text-align: justify;
        
      }
		/* Button */

			input[type="button"],
			input[type="submit"],
			input[type="reset"],
			.button,
			button {
				display: inline-block;
				padding: 0.5em 2em 0.5em 2em;
			}

				input[type="button"].small,
				input[type="submit"].small,
				input[type="reset"].small,
				.button.small,
				button.small {
					font-size: 0.85em;
					padding: 0.35em 1.5em 0.35em 1.5em;
				}

				input[type="button"].big,
				input[type="submit"].big,
				input[type="reset"].big,
				.button.big,
				button.big {
					font-size: 1.25em;
					padding: 0.75em 2em 0.75em 2em;
				}

				input[type="button"].huge,
				input[type="submit"].huge,
				input[type="reset"].huge,
				.button.huge,
				button.huge {
					font-size: 1.5em;
					padding: 0.75em 2em 0.75em 2em;
				}

		/* Pagination */

			.pagination {
				padding: 3em 0 0 0;
			}

				.pagination .previous {
					margin-right: 0.6em;
				}

				.pagination .next {
					margin-left: 0.2em;
				}

				.pagination .pages a {
					width: 2.75em;
					height: 2.75em;
					line-height: 2.75em;
				}

				.pagination .button {
					height: 2.75em;
					padding-top: 0;
					padding-bottom: 0;
					line-height: 2.75em;
				}

		/* Box */

      .box.post p{
        text-align: justify;
        text-indent: 1em;
      }
      .box.post header > p {
        font-size: 2.25em;
        line-height: 1.5em;
        position: relative;
        top: -0.65em;
        margin-bottom: -0em;
        margin-left: -1em;
        text-align: justify;
      }
			.box.post .info .newinfo .stats li a {
				border-radius: 0.4em;
				opacity: 0.5;
				-moz-transition: opacity .25s ease-in-out, background-color .25s ease-in-out;
				-webkit-transition: opacity .25s ease-in-out, background-color .25s ease-in-out;
				-ms-transition: opacity .25s ease-in-out, background-color .25s ease-in-out;
				transition: opacity .25s ease-in-out, background-color .25s ease-in-out;
			}

			.box.post .info .newinfo .stats li:hover a {
				background-color: #f4f4f4;
				opacity: 1.0;
			}

		/* Logo */

			#logo {
				font-family: "黑体";
				font-weight: 700;
				font-size: 2em;
				letter-spacing: 0.0em;
				padding: 0.5em 0.0em;
			}

				#logo a {
					display: block;
					background-color: #c94663;
					background-image: url("images/bg01.png");
					padding-top: 0.45em;
          padding-bottom: 0.4em;
					border-radius: 0.5em;
					text-align: center;
					box-shadow: inset 0px 0px 0px 1px rgba(255, 255, 255, 0.15), 0 0.025em 0.15em 0em rgba(0, 0, 0, 0.25);
					text-decoration: none;
					color: #fff;
				}

		/* Content */

			#content {
				box-shadow: 0 0 0.25em 0em rgba(0, 0, 0, 0.25);
			}

				#content > .inner {

					/*
						This sets an upper limit on your page content to prevent it
						from looking insane on really wide displays. It's currently set
						to the width of the sample post images, but you can change it to
						whatever you like (or remove it entirely).
					*/

					max-width: 1038px;
					padding-bottom: 6em;
				}

		/* Sidebar */

			#sidebar {
				position: absolute;
				top: 0;
			}

		/* Copyright */

			#copyright {
				margin: 2em 0 0 0;
				text-align: center;
			}

				#copyright p {
					font-size: 0.8em;
					line-height: 2em;
				}

				#copyright:before {
					height: 0.5em;
					margin: 0 0 2em 0;
				}

	}

/* Wide */

	@media screen and (min-width: 1201px) {

		/* Basic */

			body {
				min-width: 1200px;
				font-size: 12pt;
			}

			input, textarea, select {
				font-size: 12pt;
			}

		/* Box */

      .box.post p{
        text-align: justify;
        text-indent: 1em;
      }
			.box.post h2 {
				font-size: 3.25em;
				line-height: 1.25em;
			}

			.box.post header {
				padding: 2.75em 0 0 0;
				margin: 0 0 1em 0;
        font-size: 0.6em;
			}

				.box.post header > p {
					font-size: 2.25em;
					line-height: 1.5em;
					position: relative;
					top: -0.65em;
					margin-bottom: -0em;
          margin-left: -1em;
          text-align: justify;
				}
        .box.post .info {
                position: absolute;
                width: 5.5em;
                overflow: hidden;
              background-color: #fff;
              background-image: url("images/bg02.png");
              left: -10.5em;
              top: 0;
              padding: 0.5em 0.75em 0.5em 0.75em;
              border-top-left-radius: 0.4em;
              border-bottom-left-radius: 0.4em;
              box-shadow: 0.25em 0 0 0 #fbfbfb, 0 0 0.25em 0em rgba(0, 0, 0, 0.25);
            }

			.box.post .newinfo {
				position: absolute;
				width: 7.5em;
				overflow: hidden;
				background-color: #fff;
				background-image: url("images/bg02.png");
				left: -10.5em;
				top: 0;
				padding: 0.5em 1em 0.5em 1em;
				border-top-left-radius: 0.4em;
				border-bottom-left-radius: 0.4em;
				box-shadow: 0.25em 0 0 0 #fbfbfb, 0 0 0.25em 0em rgba(0, 0, 0, 0.25);
			}

				.box.post .info .date {
					position: relative;
					z-index: 1;
					font-family: 'Open Sans Condensed', sans-serif;
					font-weight: 500;
					text-align: center;
					display: block;
					font-size: 1.2em;
					color: #999;
					border-bottom: solid 1px #ddd;
					padding: 0 0 0.25em 0;
					margin: 0 0 0.1em 0;
				}

				.box.post .newinfo .newdate {
					position: relative;
					z-index: 1;
					font-family: 'Open Sans Condensed', sans-serif;
					font-weight: 400;
					text-align: center;
					display: block;
					font-size: 2.5em;
					color: #999;
					padding: 0 0 0 0;
					margin: 0 0 0 0;
				}

        .box.post .info .date .year {
						display: block;
						margin: 0.0em 0 0 0;
						font-size: 1.2em;
						font-weight: 500;
						color: #1b252a;
        }
					.box.post .info .date .month {
						display: block;
						margin: 0.0em 0 0 0;
						font-size: 1.2em;
						font-weight: 500;
						color: #1b252a;
					}

					.box.post .newinfo .newdate .newyear {
						display: block;
						margin: 0.0em 0 0 0;
						font-size: 0.5em;
						font-weight: 700;
						color: #999;
					}

				.box.post .info .stats {
					position: relative;
					z-index: 1;
				}

					.box.post .info .stats li {
						margin: 0 0 0 0.0em;
					}

						.box.post .info .stats li a {
							position: relative;
							display: block;
							text-align: right;
							padding: 0 0.95em 0 0.0em;
						}

							.box.post .info .stats li a:before {
								position: absolute;
								left: 0;
								top: 50%;
								margin-top: -0.5em;
                margin-left: 0.2em;
								font-size: 20px;
								width: 1.5em;
								text-align: center;
								opacity: 0.35;
							}

		/* Content */

			#content {
				padding: 3em 5em 8em 5em;
				margin-left: 21em;
			}

	}

/* Narrow */

	@media screen and (min-width: 737px) and (max-width: 1200px) {

		/* Basic */

			body {
				min-width: 1000px;
				font-size: 11pt;
			}

			input, textarea, select {
				font-size: 11pt;
			}

		/* Box */

      .box.post p {
        text-align: justify;
        text-indent: 1em;
      }
			.box.post h2 {
				font-size: 3.25em;
				line-height: 1.25em;
			}

			.box.post header {
				padding: 0 0 0 0;
				margin: 0 0 0 0;
        font-size: 0.45em;
			}

				.box.post header > p {
					font-size: 2.75em;
					line-height: 1.5em;
					position: relative;
					top: -0.75em;
					margin-bottom: -0.75em;
          margin-left: -1em;
          text-align: justify;
				}

			.box.post .info {
				width: 100%;
				padding: 1em 0 0 0;
				position: relative;
				top: -1em;
			}

			.box.post .newinfo {
				width: 100%;
				padding: 0 0 -20px 0;
				margin: 0 0 -15px 0;
				position: relative;
				border-bottom: solid 1px #ddd;
			}
				.box.post .info .date {
					display: inline;
          margin-right: 0.35em;
				}

				.box.post .newinfo .newdate {
					display: inline;
          margin-right: 0.35em;
          margin-bottom: 0em;
          padding-bottom: 0em
				}

					.box.post .newinfo .newdate .newyear {
						display: block;
						margin: 0.0em 0 0 0;
            padding: 0;
						font-size: 1.1em;
						font-weight: 400;
						color: #999;
					}

				.box.post .info .stats {
					display: inline;
					border-left: solid 1px #ddd;
					margin-left: 0.35em;
					padding-left: 1em;
				}

					.box.post .info .stats li {
						display: inline-block;
						margin-left: 0.75em;
            margin-right: -0.35em;
					}

						.box.post .info .stats li a {
							display: inline-block;
							padding-right: 0.0em;
						}

							.box.post .info .stats li a:before {
								position: relative;
								width: 1.35em;
								text-align: center;
								margin-right: 0.2em;
								opacity: 0.35;
							}

		/* Content */

			#content {
				padding: 2em 3em 6em 3em;
				margin-left: 14em;
			}

	}

/* Narrower */

	@media screen and (min-width: 737px) and (max-width: 1000px) {

		/* Basic */

			body {
				min-width: 641px;
				font-size: 14pt;
			}

			input, textarea, select {
				font-size: 14pt;
			}

		/* Logo */

			#logo {
				display: block;
			}

		/* Nav */

			#nav {
				margin-top: 0 !important;
			}

				#nav:before {
					display: none !important;
				}

				#nav li:hover a {
					background: none;
				}

		/* Sidebar */

			#sidebar {
				padding: 30px 20px 30px 20px;
			}

	}

/* Mobile */

	@media screen and (max-width: 736px) {

		/* Basic */

			body, input, textarea, select {
				line-height: 1.75em;
				font-size: 11pt;
				letter-spacing: 0;
			}

			h2, h3 {
				font-size: 1.6em;
			}

			h4, h5, h6 {
				font-size: 1.45em;
			}
		/* Section/Article */

			section, article {
				clear: both;
			}

		/* Button */

			input[type="button"],
			input[type="submit"],
			input[type="reset"],
			button,
			.button {
				display: block;
				width: 100%;
				font-size: 1.25em;
				padding: 0.75em 0 0.75em 0;
				margin: 0.5em 0 0.5em 0;
			}

		/* Pagination */

			.pagination .pages {
				display: none;
			}

		/* Box */

      .box.post p {
        text-align: justify;
        text-indent: 1em;
      }
			.box.post {
				padding-bottom: 2em;
				margin-bottom: 3em;
			}

				.box.post header > p {
					font-size: 1em;
					font-family: 'Source Sans Pro', sans-serif;
					line-height: 1.5em;
          text-align: justify;
          margin-left: -1em;
				}

				.box.post .info {
					width: 100%;
					position: absolute;
					bottom: 0;
					left: 0;
					border-top: solid 1px #ddd;
					padding-top: 0.5em;
				}

				.box.post .newinfo {
					width: 100%;
					position: absolute;
					bottom: 0;
					left: 0;
					border-bottom: solid 1px #ddd;
					padding-top: -2.0em;
          margin-top: -2.0em;
				}
					.box.post .info .date {
						display: inline;
            margin-right:0.35em;
					}

					.box.post .newinfo .newdate {
						display: inline;
            margin-right:0.35em;
					}
					.box.post .info .stats {
						display: inline;
						border-left: solid 1px #ddd;
						margin-left: 1.75em;
						padding-left: 0.75em;
					}

						.box.post .info .stats li {
							display: inline-block;
							margin-right: -0.35em;
              margin-left: 0.75em;
						}

							.box.post .info .stats li a {
								display: inline-block;
								opacity: 0.5;
							}

								.box.post .info .stats li a:before {
									position: relative;
									top: 0.1em;
									margin-right: 0.25em;
									opacity: 0.35;
								}

								.box.post .info .stats li a:active {
									opacity: 1.0;
								}

		/* Logo */

			#logo {
				display: block;
        padding-top: 0.5em;
        padding-bottom: 0.5em;
			}

		/* Nav */

			#nav {
				margin-top: 0 !important;
			}

				#nav:before {
					display: none !important;
				}

				#nav li:hover a {
					background: none;
				}

		/* Content */

			#content {
				margin-top: 44px;
				padding: 3em 20px 2em 20px;
			}

		/* Sidebar */

			#sidebar {
				padding: 20px 12px 20px 10px;
				box-shadow: inset -1px 0 0 0 rgba(255, 255, 255, 0.15), inset -0.1em 0 0.5em 0 rgba(0, 0, 0, 0.25);
			}

		/* Copyright */

			#copyright {
				margin: 2em 0 0 0;
				text-align: center;
			}

				#copyright p {
					font-size: 0.9em;
					line-height: 2em;
				}

				#copyright:before {
					height: 0.5em;
					margin: 0 0 2em 0;
				}

	}

/* Off-Canvas Sidebar */

	@media screen and (max-width: 1000px) {

		/* Basic */

			html, body {
				overflow-x: hidden;
			}

		/* Content */

			#content {
				-moz-backface-visibility: hidden;
				-webkit-backface-visibility: hidden;
				-ms-backface-visibility: hidden;
				backface-visibility: hidden;
				-moz-transition: -moz-transform 0.5s ease;
				-webkit-transition: -webkit-transform 0.5s ease;
				-ms-transition: -ms-transform 0.5s ease;
				transition: transform 0.5s ease;
				margin-top: 44px;
				margin-left: 0;
				margin-right: 0;
				min-height: 0 !important;
			}

		/* Sidebar */

			#titleBar {
				display: block;
			}

			#sidebar {
				-moz-backface-visibility: hidden;
				-webkit-backface-visibility: hidden;
				-ms-backface-visibility: hidden;
				backface-visibility: hidden;
				-moz-transition: -moz-transform 0.5s ease;
				-webkit-transition: -webkit-transform 0.5s ease;
				-ms-transition: -ms-transform 0.5s ease;
				transition: transform 0.5s ease;
				display: block;
				height: 100% !important;
				min-height: 0 !important;
				overflow-y: auto;
				position: fixed;
				top: 0;
				z-index: 10002;
				-moz-transform: translateX(-14em);
				-webkit-transform: translateX(-14em);
				-ms-transform: translateX(-14em);
				transform: translateX(-14em);
			}

			body.sidebar-visible #content, body.sidebar-visible #titleBar {
				-moz-transform: translateX(14em);
				-webkit-transform: translateX(14em);
				-ms-transform: translateX(14em);
				transform: translateX(14em);
			}

			body.sidebar-visible #sidebar {
				-moz-transform: translateX(0);
				-webkit-transform: translateX(0);
				-ms-transform: translateX(0);
				transform: translateX(0);
			}

	}

