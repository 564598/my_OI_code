# 此文件用来自动提交
git.exe add . > $null
git.exe commit -m "commit" > $null
git.exe push > $null
Clear-Host
Write-Output OK