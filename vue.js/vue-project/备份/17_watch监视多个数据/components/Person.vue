<template>
    <div class="person">
        <!-- <h1>watch的作用</h1>
        <h2>情况五:监视多个数据</h2> -->
        <h2>姓名：{{ person.name }}</h2>
        <h2>年龄：{{ person.age }}</h2>
        <h2>汽车：{{ person.car.c1 }},{{ person.car.c2 }}</h2>
        <button @click="ChName">修改名字</button>
        <button @click="ChAge">修改年龄</button>
        <button @click="ChFiCar">修改第一台车</button>
        <button @click="ChSeCar">修改第二台车</button>
        <button @click="ChCar">修改所有车</button>
    </div>
</template>

<script setup lang="ts">
import { reactive, watch, toRefs } from 'vue';
let person = reactive({
    name: "薄姐",
    age: 18,
    car: {
        c1: "宝马",
        c2: "奔驰"
    }
})
function ChAge() {
    person.age += 1;
}
function ChName() {
    person.name += "~"
}
function ChFiCar() {
    person.car.c1 = "帕拉梅拉";
}
function ChSeCar() {
    person.car.c2 = "凯迪拉克";
}
function ChCar() {
    person.car = { c1: "蟑螂车1", c2: "蟑螂车2" };
}

watch([() => { return person.name }, () => person.car], (newValue, oldValue) => {
    console.log(person.name, newValue, oldValue);
    //()=>{return person.name} 这里是getter函数
    //情况四:watch监视ref或者reactive对象里的某个属性
    //如果该属性是基本属性,要写成函数式
})
</script>

<style>
.person {
    border: 2px solid #333;
    background-color: aqua;
    padding: 20px;
    margin: 20px;
    border-radius: 8px;
}

button {
    margin: 0 10px;
}
</style>