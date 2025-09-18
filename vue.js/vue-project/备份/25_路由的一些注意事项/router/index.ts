//创建一个路由器并暴露出去

//引入createRouter 
import { createRouter, createWebHistory } from "vue-router";

//引入一个个可能要呈现的路由组件
import Home from "@/pages/Home.vue";
import News from "@/pages/News.vue";
import About from "@/pages/About.vue";


//创建路由器(制定路由的时候要想好路由的工作模式)
const router = createRouter({
    history: createWebHistory(),//路由器的工作模式
    routes: [//一个一个的路由
        {
            name: 'home',
            path: '/home',
            component: Home
        },
        {
            name: 'news',
            path: '/news',
            component: News
        },
        {
            name: 'about',
            path: '/about',
            component: About
        },
    ]
})

//暴露出去
export default router