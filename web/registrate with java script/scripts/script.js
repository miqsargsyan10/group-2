$(document).ready(function() {
    if (window.sessionStorage.getItem("name") != null) {
        $("#divBack").remove();
        changeView();    
    } else {
        var timeout=$("#divSend");
        timeout.click(changeView);
    }
})
function changeView() {
    var counter = 1;
    if (window.sessionStorage.getItem("name") == null) {
        var name = $("#nameIs").val();
        var surname = $("#surnameIs").val();
        var gender = $("input:radio[name='gender']:checked").val();
        window.sessionStorage.setItem("name", name);
        window.sessionStorage.setItem("surname", surname);
        window.sessionStorage.setItem("gender", gender);
        $("#divBack").remove();
    } else {
        var name = window.sessionStorage.getItem("name");
        var surname = window.sessionStorage.getItem("surname");
        var gender = window.sessionStorage.getItem("gender");
    }
    var h1 = $("<h1/>").appendTo("#header");
    var str1 = "Hi, mr. ";
    var str2 = "Hi, mrs. ";
    var str0 = " ";
    if (gender == "male") {
        h1.text(str1.concat(name, str0, surname));
    } else {
        h1.text(str2.concat(name, str0, surname));
    }
    var div = $("<div/>").appendTo("#container");
    div.attr("id","people");
    var name = "Name: ";
    var surname = "Surname: ";
    var country = "Country: ";
    var city = "City: ";
    var addres = "Addres: ";
    var phone = "Phone: ";
    function saveProcess () {
        var div = $("<div/>").appendTo("#people");
        div.attr("class","manN");
        var h1 = $("<h1/>").appendTo(div);
        h1.text(name.concat($("#nameMan input").val()));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(surname.concat($("#surnameMan input").val()));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(country.concat($("#countryMan input").val()));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(city.concat($("#cityMan input").val()));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(addres.concat($("#addresMan input").val()));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(phone.concat($("#phoneMan input").val()));
        window.sessionStorage.setItem("user" + counter, JSON.stringify({"nameMan":$("#nameMan input").val(), "surnameMan":$("#surnameMan input").val(), "countryMan":$("#countryMan input").val(), "cityMan":$("#cityMan input").val(), "addresMan":$("#addresMan input").val(), "phoneMan":$("#phoneMan input").val()}));
        counter++;
    }
    document.getElementById('saveInfo').onclick = saveProcess;
}