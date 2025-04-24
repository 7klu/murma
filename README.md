# Murma

[![GitHub Activity](https://img.shields.io/github/commit-activity/m/7klu/murma.svg?style=for-the-badge)](https://github.com/7klu/murma/commits)
[![License](https://img.shields.io/badge/license-GPL-blue.svg?style=for-the-badge)](https://github.com/7klu/murma/blob/main/LICENSE)
[![Forks](https://img.shields.io/github/forks/7klu/murma?style=for-the-badge)](https://github.com/7klu/murma/fork)
[![Stars](https://img.shields.io/github/stars/7klu/murma?style=for-the-badge)](https://github.com/7klu/murma/stargazers)


**Murma** is a C-based project designed to analyze a person's voice and estimate a wide range of biometric and health-related attributes. Using advanced signal processing and machine learning techniques, **Murma** transforms vocal data into insightful predictions about the speaker's physical characteristics, emotional state, and potential medical conditions.

> [!NOTE]
> The predictions made by Murma are probabilistic and not 100% accurate — as reflected in the performance metrics — but they provide useful approximations for analysis and exploration.

<br/>

## `🧠` What Murma Can Estimate From Your Voice:

| Attribute                        | Main Method                                                  | Performance                                    |
| -------------------------------- | ------------------------------------------------------------ | ---------------------------------------------- |
| **Height**                       | Formant analysis → estimate vocal-tract length (VTL) + linear regression | r = 0.756 (R² = 0.572)             |
| **Weight / BMI**                 | MFCC features + balanced random forests                      | AUC up to 0.994 (women 41–60 yrs)              |
| **Age**                          | X-vectors + QuartzNet (multi-task age/gender)                | MAE 5.12 yrs (M) / 5.29 yrs (F); 99.6% gender  |
| **Gender**                       | Same as above (age/gender multitask)                         | Accuracy 99.6%                                 |
| **Coronary artery disease risk** | CNN + voice biomarkers                                       | 2.6× higher hazard of major cardiac events     |
| **Heart-failure mortality**      | Logistic regression + voice biomarkers                       | p < 0.001 (5-year mortality prediction)        |
| **Major depression (MDD)**       | MFCC + i-vectors                                             | AUC gain +14% over baseline                    |
| **Parkinson’s disease**          | CNN (InceptionV3 on spectrograms)                            | AUC 0.9125; accuracy 91.1%                     |
| **Emotion / Stress**             | GRU + MFCC (IEMOCAP dataset)                                 | Accuracy 97.47%                                |

<br/>

## `⚙️` Technology

![C](https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=white) 
![Makefile](https://img.shields.io/badge/Makefile-000000?style=flat&logo=gnu&logoColor=white) 
![FFmpeg](https://img.shields.io/badge/FFmpeg-007808?style=flat&logo=ffmpeg&logoColor=white)

<br/>

## `🚧` Status

The project is under active development. Many of the predictive models are based on state-of-the-art research, adapted into an efficient, real-time analysis pipeline.

<br/>

> [!WARNING]
> Murma is **not a medical diagnostic tool**. It is intended for research and educational purposes only. Always consult a healthcare professional for medical concerns.

<br/>


Stay tuned — more voice-based insights coming soon.
