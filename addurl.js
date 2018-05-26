var all = document.querySelectorAll('a');
for(var i=0;i<all.length;i++){
	if( all[i].text.indexOf("mp4") != -1 ||
		all[i].text.indexOf("mkv") != -1 ||
		all[i].text.indexOf("wmv") != -1){
		
		addurl('[M]','mpv',all[i]);
		addurl('[P]','potplayermini64',all[i]);
	}
}

function addurl(title,prefix,element){
	var a = document.createElement('a');
	a.text = title;
	a.href = prefix + ':' + element.href;
	element.parentElement.insertBefore(a,element)	
}