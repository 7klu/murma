# `🎙️` Murma

**Murma** is a C-based project designed to analyze a person's voice and estimate a wide range of biometric and health-related attributes. Using advanced signal processing and machine learning techniques, **Murma** transforms vocal data into insightful predictions about the speaker's physical characteristics, emotional state, and potential medical conditions.

> [!NOTE]
> The predictions made by Murma are probabilistic and not 100% accurate — as reflected in the performance metrics — but they provide useful approximations for analysis and exploration.

---

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

---

## `⚙️` Technology

Murma is primarily written in **C**, with integrations of signal processing libraries and bindings where needed for machine learning components. The system processes audio input, extracts relevant features (e.g., MFCCs, formants, spectrograms), and applies trained models to output predictions.

![C](https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=white) 

---

## `🚧` Status

The project is under active development. Many of the predictive models are based on state-of-the-art research, adapted into an efficient, real-time analysis pipeline.

---

> [!WARNING]
> Murma is **not a medical diagnostic tool**. It is intended for research and educational purposes only. Always consult a healthcare professional for medical concerns.

---

Stay tuned — more voice-based insights coming soon.
