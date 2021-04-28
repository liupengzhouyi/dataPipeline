pipeline {
    agent {
        label 'cpp'
    }

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                sh 'g++ --version'
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
