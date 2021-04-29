pipeline {
    agent any
//     agent {
//         label 'cpp'
//     }

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
//                 sh 'python --version'
//                 sh 'python test.py'
//                 git 'https://github.com/liupengzhouyi/dataPipeline.git'
//                 sh 'g++ main.cpp -o main'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
//                 sh './main'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
