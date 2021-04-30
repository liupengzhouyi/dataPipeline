pipeline {
    agent any
    //agent {
    //    label 'cpp'
    //}

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                echo 'python3 version:'
                sh 'python3 --version'
                echo 'g++ version:'
                sh 'g++ --version'
                git 'https://github.com/liupengzhouyi/dataPipeline.git'
                sh 'pwd'
                sh 'ls -l'
                // sh 'mkdir build'
                sh 'ls -l'
                sh 'cd build'
                sh 'pwd'
                sh 'ls -l'
                sh 'cmake ..'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
                sh 'python3 test.py'
                sh './dataPipeline'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}

