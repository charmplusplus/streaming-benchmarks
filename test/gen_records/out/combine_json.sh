echo "[" > master.json
for i in $(seq 0 127); do
    if [ "$i" -eq 127 ]; then
        sed '$ s/,$//' "./data-$i.json" >> master.json
    else
        cat "./data-$i.json" >> master.json
    fi
done
echo "]" >> master.json
