function res = matMean(mat, threshold)
    %%% Return mean of matrix values over certain threshold
    % INPUTS: mat (array of values), threshold (double, anything below 
    %   it does not count towards mean operation (inclusive))
    % OUTPUT: res(double): mean of the matrix values over threshold
    res = sum(mat.*(mat > threshold))./sum(mat>threshold)
end