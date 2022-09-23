import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppComponent } from './app.component';
import {StudentComponent} from "./student/student.component";
import {ComponentClassroom} from "./classroom/classroom.component";
import {FormsModule} from "@angular/forms";
import {HomeComponent} from "./pages/Home/home.component";
import {LoginComponent} from "./pages/Home/Login/login.component";
import {RouterModule, Routes} from "@angular/router";
import {ContactComponent} from "./pages/Home/ContactUs/contact.component";
import {FoodComponent} from "./food/food.component";
import {HttpClient, HttpClientModule} from "@angular/common/http";

//Khai báo các page trong website
const appRoutes: Routes = [
    {path: '', component: HomeComponent},
    {path: 'login', component: LoginComponent},
    {path: 'contact-us', component: ContactComponent},
    {path: 'app-food', component: FoodComponent}
]

@NgModule({
  declarations: [
    AppComponent, StudentComponent, ComponentClassroom, HomeComponent, LoginComponent, ContactComponent, FoodComponent
  ],
  imports: [
    BrowserModule, FormsModule, RouterModule.forRoot(appRoutes), HttpClientModule
    ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
