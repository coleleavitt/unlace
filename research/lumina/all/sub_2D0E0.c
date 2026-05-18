__int64 __fastcall sub_2D0E0(__int64 *a1, _DWORD *a2, int *a3, char a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 result; // rax
  int v9; // eax

  if ( *((_QWORD *)a3 + 2) )
  {
    sub_2A270(a1, (_QWORD *)a3 + 1);
    sub_2C120((__int64)a1, "idbs", "fk_user", "users", "id");
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
  }
  if ( *((_QWORD *)a3 + 5) )
    sub_2A010(a1, (__int64)"history.time", (__int64)(a3 + 8));
  if ( *((_QWORD *)a3 + 8) )
    sub_29DA0(a1, (__int64)"history.id", (__int64)(a3 + 14));
  if ( *((_QWORD *)a3 + 11) )
  {
    sub_2A270(a1, (_QWORD *)a3 + 10);
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
  }
  if ( *((_QWORD *)a3 + 14) )
  {
    sub_2A270(a1, (_QWORD *)a3 + 13);
    sub_2C120((__int64)a1, "idbs", "fk_input", "inputs", "id");
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
  }
  if ( *((_QWORD *)a3 + 17) )
  {
    sub_2A270(a1, (_QWORD *)a3 + 16);
    sub_2C120((__int64)a1, "history", "fk_func", "funcs", "id");
  }
  if ( *((_QWORD *)a3 + 20) )
  {
    sub_2A270(a1, (_QWORD *)a3 + 19);
    sub_2C120((__int64)a1, "history", "fk_push", "pushes", "id");
    sub_2C120((__int64)a1, "pushes", "fk_user", "users", "id");
  }
  if ( *((_QWORD *)a3 + 23) )
  {
    sub_29AB0(a1, (_QWORD *)a3 + 22, (__int64)"inputs", (__int64)"hash");
    sub_2C120((__int64)a1, "idbs", "fk_input", "inputs", "id");
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
  }
  if ( *((_QWORD *)a3 + 26) )
  {
    sub_29AB0(a1, (_QWORD *)a3 + 25, (__int64)"calcrel_hash", (__int64)"hash");
    sub_2C120((__int64)a1, "calcrel_hash", "fk_func", "funcs", "id");
    sub_2C120((__int64)a1, "history", "fk_func", "funcs", "id");
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
  }
  if ( *((_QWORD *)a3 + 29) )
  {
    sub_29DA0(a1, (__int64)"pushes.id", (__int64)(a3 + 56));
    sub_2C120((__int64)a1, "history", "fk_push", "pushes", "id");
  }
  v5 = *a3;
  if ( (*a3 & 8) != 0 )
  {
    sub_2BAC0(
      (__int64)a1,
      nullptr,
      "history",
      "id",
      nullptr,
      "( SELECT fk_func, MAX(id) AS last_id FROM history GROUP BY fk_func )",
      "hist_last_func_recs",
      "last_id",
      nullptr);
    sub_2C120((__int64)a1, "history", "fk_func", "funcs", "id");
    a2[17] = sub_292E0(a1, 115, "funcs", "name");
    a2[18] = sub_292E0(a1, 85, "funcs", "ea");
    v9 = -1;
    if ( a4 )
      v9 = sub_292E0(a1, 66, "funcs", "metadata");
    a2[19] = v9;
    v5 = *a3;
  }
  if ( (v5 & 0x80000) != 0 )
  {
    *a2 = sub_292E0(a1, 66, "calcrel_hash", "hash");
    sub_2C120((__int64)a1, "history", "fk_func", "funcs", "id");
    sub_2C120((__int64)a1, "calcrel_hash", "fk_func", "funcs", "id");
    v5 = *a3;
  }
  if ( (v5 & 0x10000) != 0 )
  {
    a2[1] = sub_292E0(a1, 117, "inputs", "id");
    a2[2] = sub_292E0(a1, 66, "inputs", "hash");
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
    sub_2C120((__int64)a1, "idbs", "fk_input", "inputs", "id");
    v5 = *a3;
  }
  if ( (v5 & 0x20000) != 0 )
  {
    if ( (int)a2[1] < 0 )
      a2[1] = sub_292E0(a1, 117, "inputs", "id");
    a2[3] = sub_292E0(a1, 66, "inputs", "path");
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
    sub_2C120((__int64)a1, "idbs", "fk_input", "inputs", "id");
    v5 = *a3;
  }
  if ( (v5 & 0x40000) != 0 )
  {
    a2[4] = sub_292E0(a1, 115, "idbs", "path");
    sub_2C120((__int64)a1, "history", "fk_idb", "idbs", "id");
  }
  if ( a4 || (v6 = *a3, (*a3 & 0x100000) != 0) )
  {
    a2[5] = sub_292E0(a1, 85, "history", "ea");
    v6 = *a3;
    if ( (*a3 & 0x400000) == 0 )
    {
LABEL_35:
      if ( (v6 & 0x1000) == 0 )
        goto LABEL_36;
      goto LABEL_43;
    }
  }
  else if ( (v6 & 0x400000) == 0 )
  {
    goto LABEL_35;
  }
  a2[8] = sub_292E0(a1, 115, "users", "user_name");
  sub_2C120((__int64)a1, "history", "fk_push", "pushes", "id");
  sub_2C120((__int64)a1, "pushes", "fk_user", "users", "id");
  v6 = *a3;
  if ( (*a3 & 0x1000) == 0 )
  {
LABEL_36:
    if ( (v6 & 0x2000) == 0 )
      goto LABEL_37;
LABEL_44:
    a2[10] = sub_292E0(a1, 115, "users", "license_email");
    sub_2C120((__int64)a1, "history", "fk_push", "pushes", "id");
    sub_2C120((__int64)a1, "pushes", "fk_user", "users", "id");
    if ( (*a3 & 0x4000) == 0 )
      goto LABEL_38;
    goto LABEL_45;
  }
LABEL_43:
  a2[9] = sub_292E0(a1, 115, "users", "license_name");
  sub_2C120((__int64)a1, "history", "fk_push", "pushes", "id");
  sub_2C120((__int64)a1, "pushes", "fk_user", "users", "id");
  v6 = *a3;
  if ( (*a3 & 0x2000) != 0 )
    goto LABEL_44;
LABEL_37:
  if ( (v6 & 0x4000) == 0 )
    goto LABEL_38;
LABEL_45:
  a2[11] = sub_292E0(a1, 115, "users", "license_id");
  sub_2C120((__int64)a1, "history", "fk_push", "pushes", "id");
  sub_2C120((__int64)a1, "pushes", "fk_user", "users", "id");
LABEL_38:
  a2[6] = sub_292E0(a1, 85, "history", "id");
  a2[7] = sub_292E0(a1, 116, "history", "time");
  a2[12] = sub_292E0(a1, 115, "history", "name");
  v7 = -1;
  if ( a4 )
    v7 = sub_292E0(a1, 66, "history", "metadata");
  a2[13] = v7;
  a2[14] = sub_292E0(a1, 117, "history", "fk_func");
  a2[15] = sub_292E0(a1, 117, "history", "fk_idb");
  result = sub_292E0(a1, 117, "history", "fk_push");
  a2[16] = result;
  return result;
}
