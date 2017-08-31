// Written by @nocardoz

blacklist = [""]; //TODO create settings page for users to enter their own usernames

if (location.href.includes("profile.intra.42.fr")){
	for (var i = 0; i < blacklist.length; i++){
		// checks if usernames in the blacklist is present in the correction imminent phase
		uid = document.querySelector(`[data-user-link="${blacklist[i]}"]`);
		if (uid){
			// clicks red x, then clicks confirm after suppressing confirmation window
			window.confirm = function(){return true;}
			id = uid.parentElement.parentElement.getAttribute("data-scale-team");
			document.querySelector("#destroyScaleTeamModalContainer_"+id).querySelector('.btn-danger').click()
		}
	}
	setTimeout(function(){
		// reload the script every 5 minutes because usernames do not dynamically update
		location.reload();
	}, 1000 * 60 * 5)
}
