import {Component} from "@angular/core";
import {IFoodMenu, IMenu} from "../interfaces/foodmenu.interface";
import {HttpClient} from "@angular/common/http";

@Component({
    selector: 'app-food',
    templateUrl: './food.component.html'
})

export class FoodComponent {
    data: IMenu[] = [];

    constructor(private http: HttpClient) {
    }

    ngOnInit(){ //Hàm này tự động chạy khi print giao diện ra
        const url = "https://foodgroup.herokuapp.com/api/menu";
        this.http.get<IFoodMenu>(url).subscribe(data=>{
            this.data = data.data;
        });
    }
}
