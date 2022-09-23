import {Component} from "@angular/core";
import {IStudent} from "../../interfaces/student.interface";

@Component({
  selector: 'app-home',
  templateUrl: './home.component.html'
})
export class HomeComponent extends Component{
    student: IStudent = {
        id: 1, name: 'Nam', age: 18, address: '8 Tôn Thất Thuyết'
    };

    arrayNumber: number[] = [1, 2, 3, 4, 5];

    stringArray: string[] = ["Nguyễn Hoàng Nam", "Nguyễn Minh Khánh", "Nguyễn Trọng Trường"];

    ls: IStudent[] = [
        {id: 1, name: "Nguyễn Hoàng Nam", age: 19, address: "8 Tôn Thất Thuyết"},
        {id: 2, name: "Nguyễn Minh Khánh", age: 21, address: "8 Tôn Thất Thuyết"},
        {id: 3, name: "Nguyễn Trọng Trường", age: 25, address: "8 Tôn Thất Thuyết"}
    ]
}
