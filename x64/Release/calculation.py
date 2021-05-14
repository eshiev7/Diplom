import nashpy as nash
import numpy as np

def calc(x1, x2, x3, x4,
         x5, x6, x7, x8,
         x9, x10, x11, x12):
    pl1 = np.array([[x1, x2], [x3, x4], [x5, x6]])
    pl2 = np.array([[x7, x8], [x9, x10], [x11, x12]])

    game = nash.Game(pl1, pl2)
    game_solution = [list(k) for k in [list(i) for i in game.support_enumeration()][0]]
    return str(game_solution)
    
def calc1():
    pl1 = np.array([[1, 2], [2, 1], [0, 3]])
    pl2 = np.array([[-1, 0], [1, 3], [5, 1]])

    game = nash.Game(pl1, pl2)
    game_solution = [list(k) for k in [list(i) for i in game.lemke_howson_enumeration()][0]]
    return str(game_solution)
