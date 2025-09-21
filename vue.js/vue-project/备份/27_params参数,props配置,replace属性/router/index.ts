//创建一个路由器并暴露出去

//引入createRouter 
import { createRouter, createWebHistory } from "vue-router";

//引入一个个可能要呈现的路由组件
import Home from "@/pages/Home.vue";
import News from "@/pages/News.vue";
import About from "@/pages/About.vue";
import details from "@/pages/details.vue"

//创建路由器(制定路由的时候要想好路由的工作模式)
const router = createRouter({
    history: createWebHistory(),//路由器的工作模式
    routes: [//一个一个的路由
        {
            name: 'userHome',
            path: '/Home',
            component: Home
        },
        {
            name: 'userNews',
            path: '/News',
            component: News,
            children: [
                {
                    name: 'details',
                    path: 'details',
                    component: details,
                    //第一种写法,将路由收到的所有params参数作为props传给路由组件
                    //props: true
                    // props的作用相当于
                    //<details id=?? time=?? thing=??/>

                    //第二种写法,可以自己决定将什么作为props给路由组件
                    props(route) {
                        console.log(route);

                        return route.query
                    }
                }
            ]

        },
        {
            name: 'userAbout',
            path: '/About',
            component: About
        },
        {
            path: '/',
            redirect: '/Home'
        },
    ]
})

//暴露出去
export default router