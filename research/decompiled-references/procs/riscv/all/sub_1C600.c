__int64 __fastcall sub_1C600(_QWORD *a1, __int64 *a2, __int64 *a3, char a4)
{
  char **v4; // r15
  __int64 v7; // rsi
  __int64 tinfo_size; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  char tinfo_property; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  char v19; // al
  char v20; // dl
  char v21; // dl
  char v22; // al
  __int64 v23; // r13
  __int64 v24; // r14
  unsigned __int64 v25; // r12
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  int v30; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 *v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *a3;
  v31[3] = (__int64 *)__readfsqword(0x28u);
  tinfo_size = get_tinfo_size(&v30, v7, 0);
  if ( tinfo_size == -1 )
    return 0;
  v10 = tinfo_size;
  if ( !a4 )
    goto LABEL_6;
  if ( (__int64)a1[3] > 0 )
    return 3;
  v11 = 2LL * LOBYTE((&off_34160)[2 * *(unsigned int *)a1 + 1]);
  if ( v30 != v11 || v11 != v10 )
  {
LABEL_6:
    tinfo_property = get_tinfo_property(*a3, 2);
    if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    {
      if ( (get_tinfo_property(*a3, 2) & 0x2F) == 0xD )
      {
        v17 = *(unsigned int *)a1;
        if ( (v17 & 0xFFFFFFFB) == 0
          || (v22 = get_tinfo_property(*a3, 2), v17 = *(unsigned int *)a1, (v22 & 0x3F) == 0x1D) )
        {
          v18 = LOBYTE((&off_34160)[2 * v17 + 1]);
          if ( v18 >= v10 )
            goto LABEL_24;
          goto LABEL_17;
        }
        if ( (unsigned int)(v17 - 1) <= 1 || (unsigned int)(v17 - 5) <= 2 )
        {
          v31[0] = a2;
          v31[1] = (_QWORD *)(&dword_0 + 2);
          if ( (unsigned __int8)sub_1C0F0(v31, a3, 0) )
          {
            v23 = *a2;
            v24 = *a2 + 16 * a2[1];
            if ( v24 != v23 )
            {
              v28 = 0;
              v29 = 0;
              while ( 1 )
              {
                v26 = get_tinfo_property(*(_QWORD *)(v23 + 8), 2);
                v27 = *(unsigned int *)a1;
                if ( (v26 & 0xF) == 9 )
                {
                  ++v28;
                  v25 = *((unsigned __int8 *)&off_34160 + 16 * v27 + 10);
                }
                else
                {
                  ++v29;
                  v25 = LOBYTE((&off_34160)[2 * v27 + 1]);
                }
                if ( v25 < get_tinfo_size(0, *(_QWORD *)(v23 + 8), 0) )
                  break;
                v23 += 16;
                if ( v23 == v24 )
                {
                  if ( v28 && (unsigned __int64)(a1[2] + v28) <= 8 )
                  {
                    if ( !v29 )
                      goto LABEL_58;
                    result = 7;
                    if ( (unsigned __int64)(a1[1] + v29) <= 8 )
                      return result;
                  }
                  break;
                }
              }
            }
          }
          v18 = LOBYTE((&off_34160)[2 * *(unsigned int *)a1 + 1]);
          if ( v18 >= v10 )
          {
LABEL_24:
            if ( (unsigned __int64)(a1[1] + 1LL) <= 8 )
              return 1;
            return 3;
          }
LABEL_17:
          if ( 2 * v18 >= v10 )
          {
            if ( (unsigned __int64)(a1[1] + 1LL) > 8 )
              return 3;
            return 5;
          }
          return 8;
        }
        if ( !under_debugger )
        {
          interr(10482);
LABEL_58:
          result = 7;
          if ( v28 != 1 )
            return result;
          return 2;
        }
LABEL_60:
        BUG();
      }
      return 0;
    }
    v13 = *(unsigned int *)a1;
    if ( (v13 & 0xFFFFFFFB) == 0 || (v19 = get_tinfo_property(*a3, 2), v13 = *(unsigned int *)a1, (v19 & 0xF) != 9) )
    {
      v14 = LOBYTE((&off_34160)[2 * v13 + 1]);
      if ( v14 >= v10 )
        goto LABEL_24;
      goto LABEL_9;
    }
    if ( (unsigned int)(v13 - 5) <= 2 || (unsigned int)(v13 - 1) <= 1 )
    {
      v4 = &off_34160;
      if ( *((unsigned __int8 *)&off_34160 + 16 * v13 + 10) < v10 )
      {
LABEL_23:
        v14 = LOBYTE(v4[2 * v13 + 1]);
        if ( v14 >= v10 )
          goto LABEL_24;
LABEL_9:
        if ( 2 * v14 >= v10 )
        {
          v15 = a1[1];
          if ( (unsigned __int64)(v15 + 2) <= 8 )
            return 1;
          if ( v15 != 7 )
            return 3;
          return 5;
        }
        return 8;
      }
    }
    else
    {
      if ( under_debugger )
        goto LABEL_60;
      interr(10481);
    }
    if ( (unsigned __int64)(a1[2] + 1LL) <= 8 )
      return 2;
    goto LABEL_23;
  }
  if ( (unsigned __int64)(a1[1] + 2LL) > 8 )
    return 3;
  v20 = get_tinfo_property(*a3, 2);
  result = 4;
  if ( (v20 & 0xFu) > 0xA && (v20 & 0x3F) != 0x2D )
  {
    v21 = get_tinfo_property(*a3, 2);
    result = 6;
    if ( (v21 & 0x2F) != 0xD )
      return 0;
  }
  return result;
}
