| Attribute                        | Main Method                                                  | Performance                                    
| -------------------------------- | ------------------------------------------------------------ | ---------------------------------------------- 
| **Height**                       | Formant analysis → estimate vocal‑tract length (VTL) + linear regression | r = 0.756 (R² = 0.572)
| **Weight / BMI**                 | MFCC features + balanced random forests                      | AUC up to 0.994 (women 41–60 yrs)
| **Age**                          | X‑vectors + QuartzNet (multi‑task age/gender)                | MAE 5.12 yrs (M) / 5.29 yrs (F); 99.6 % gender
| **Gender**                       | Same as above (age/gender multitask)                         | Accuracy 99.6 %
| **Coronary artery disease risk** | CNN + voice biomarkers                                       | 2.6 × higher hazard of major cardiac events
| **Heart‑failure mortality**      | Logistic regression + voice biomarkers                       | p < 0.001 (5‑year mortality prediction)
| **Major depression (MDD)**       | MFCC + i‑vectors                                             | AUC gain +14 % over baseline
| **Parkinson’s disease**          | CNN (InceptionV3 on spectrograms)                            | AUC 0.9125; accuracy 91.1 %
| **Emotion / Stress**             | GRU + MFCC (IEMOCAP dataset)                                 | Accuracy 97.47 %
