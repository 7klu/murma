# 💡 Health Risk Estimations Based on Voice Analysis (Without AI and high technology, just with calculations)

This document summarizes the recommended **weights and thresholds** for estimating various health conditions using voice features. These formulas are simplified approximations, based on research findings, and intended for use in C-based signal processing systems.

---

## 🫀 Coronary Artery Disease (CAD)

**Relevant voice factors:**

| Factor      | Type     | Weight    | Explanation                                     |
|-------------|----------|-----------|-------------------------------------------------|
| `age`       | Years    | `+0.2f`   | Risk increases after 45 (men), 55 (women)       |
| `gender`    | Boolean  | `+0.2f`   | Slightly higher risk for women                  |
| `intensity` | dB       | `-0.1f`   | Low voice intensity may indicate poor health    |
| `jitter`    | Percent  | `+0.3f`   | Irregular pitch patterns                        |
| `shimmer`   | Percent  | `+0.2f`   | Amplitude instability linked to stress/fatigue  |

**High-risk threshold:** `> 5.0`

---

## ❤️ Heart Failure Mortality (HFM)

**Relevant voice factors:**

| Factor      | Type     | Weight    | Explanation                                     |
|-------------|----------|-----------|-------------------------------------------------|
| `age`       | Years    | `+0.25f`  | Risk rises significantly after 65               |
| `intensity` | dB       | `+0.1f`   | Weak voice may reflect declining condition      |
| `jitter`    | Percent  | `+0.25f`  | Linked with voice fatigue                       |
| `shimmer`   | Percent  | `+0.2f`   | Amplitude fluctuations in fatigued voices       |
| `gender`    | Boolean  | `+0.15f`  | Slight increase in mortality among women        |

**High-risk threshold:** `> 4.0`

---

## 🧠 Depression (MDD)

**Relevant voice factors:**

| Factor      | Type     | Weight    | Explanation                                     |
|-------------|----------|-----------|-------------------------------------------------|
| `f0`        | Hz       | `-0.1f`   | Lower pitch associated with depressive state    |
| `jitter`    | Percent  | `+0.4f`   | Indicative of monotone or unstable voice        |
| `shimmer`   | Percent  | `+0.3f`   | Weak amplitude fluctuations                     |
| `intensity` | dB       | `-0.2f`   | Lower energy and tone often present             |
| `gender`    | Boolean  | `+0.2f`   | Women are more frequently diagnosed             |

**High-risk threshold:** `> 4.5`

---

## 🧬 Parkinson’s Disease

**Relevant voice factors:**

| Factor      | Type     | Weight    | Explanation                                     |
|-------------|----------|-----------|-------------------------------------------------|
| `f0`        | Hz       | `-0.05f`  | Reduced pitch range in Parkinson’s patients     |
| `jitter`    | Percent  | `+0.3f`   | Micro-variations linked to motor issues         |
| `shimmer`   | Percent  | `+0.3f`   | Amplitude instability                           |
| `intensity` | dB       | `-0.1f`   | Voice becomes quieter                           |
| `age`       | Years    | `+0.2f`   | Higher prevalence in elderly                    |

**High-risk threshold:** `> 4.0`

---

## 😰 Stress / Emotional Instability

**Relevant voice factors:**

| Factor      | Type     | Weight    | Explanation                                     |
|-------------|----------|-----------|-------------------------------------------------|
| `f0`        | Hz       | `+0.3f`   | Elevated pitch is a stress marker               |
| `jitter`    | Percent  | `+0.3f`   | Pitch instability under emotional load          |
| `shimmer`   | Percent  | `+0.2f`   | Amplitude variability                           |
| `intensity` | dB       | `+0.4f`   | Higher voice energy = agitation/stress          |
| `gender`    | Boolean  | `+0.1f`   | Slight variation in vocal stress expression     |

**High-risk threshold:** `> 5.0`

---

⚠️ **Note:** All calculations are additive and cumulative, and final scores can be normalized to a 0–10 scale if needed. These weights are based on general patterns in medical literature and should be further calibrated with real-world data where possible.

