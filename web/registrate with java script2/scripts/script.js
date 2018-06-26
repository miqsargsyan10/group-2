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
    if (typeof counter == 'undefined') {
        var counter = 1;
    }
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
    var i = 1;
    while (i < counter) {
        saveProcessRefresh(window.sessionStorage.getItem("name" + i), window.sessionStorage.getItem("surname" + i), window.sessionStorage.getItem("country" + i), window.sessionStorage.getItem("city" + i), window.sessionStorage.getItem("addres" + i), window.sessionStorage.getItem("phone" + i));
        i++;
    }
    function saveProcess () {
        var div = $("<div/>").appendTo("#people");
        div.attr("class","manN");
        var h1 = $("<h1/>").appendTo(div);
        h1.text(name.concat($("#nameMan input").val()));
        window.sessionStorage.setItem("name" + counter, $("#nameMan input").val());
        var h1 = $("<h1/>").appendTo(div);
        h1.text(surname.concat($("#surnameMan input").val()));
        window.sessionStorage.setItem("surname" + counter, $("#surnameMan input").val());
        var h1 = $("<h1/>").appendTo(div);
        h1.text(country.concat($("#countryMan input").val()));
        window.sessionStorage.setItem("country" + counter, $("#countryMan input").val());
        var h1 = $("<h1/>").appendTo(div);
        h1.text(city.concat($("#cityMan input").val()));
        window.sessionStorage.setItem("city" + counter, $("#cityMan input").val());
        var h1 = $("<h1/>").appendTo(div);
        h1.text(addres.concat($("#addresMan input").val()));
        window.sessionStorage.setItem("addres" + counter, $("#addresMan input").val());
        var h1 = $("<h1/>").appendTo(div);
        h1.text(phone.concat($("#phoneMan input").val()));
        window.sessionStorage.setItem("phone" + counter, $("#phoneMan input").val());
        counter++;
        console.log(counter);
    }
    function saveProcessRefresh (nameM, surnameM, countryM, cityM, addresM, phoneM) {
        var div = $("<div/>").appendTo("#people");
        div.attr("class","manN");
        var h1 = $("<h1/>").appendTo(div);
        h1.text(name.concat(nameM));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(surname.concat(surnameM));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(country.concat(countryM));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(city.concat(cityM));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(addres.concat(addresM));
        var h1 = $("<h1/>").appendTo(div);
        h1.text(phone.concat(phoneM));
    }
    document.getElementById('saveInfo').onclick = saveProcess;
}