# womblR
Implements a spatiotemporal boundary detection model with a dissimilarity metric for areal data with inference in a Bayesian setting using Markov chain Monte Carlo (MCMC). The response variable can be modeled as Gaussian (no nugget), probit or Tobit link and spatial correlation is introduced at each time point through a conditional autoregressive (CAR) prior. Temporal correlation is introduced through a hierarchical structure and can be specified as exponential or first-order autoregressive. Full details of the package can be found in the accompanying vignette. Furthermore, the details of the package can be found in "Diagnosing Glaucoma Progression with Visual Field Data Using a Spatiotemporal Boundary Detection Method", by Berchuck et al (2018), <arXiv:1805.11636>. The paper is in press at the Journal of the American Statistical Association.

See `vignette('womblR-example')` for usage.
