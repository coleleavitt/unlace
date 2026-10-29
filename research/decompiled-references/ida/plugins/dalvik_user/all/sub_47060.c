__int64 __fastcall sub_47060(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  int v3; // r14d
  int v4; // r12d
  unsigned __int64 v5; // rdx
  int v6; // eax
  char v8; // dl
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax

  v2 = a1[56];
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  if ( (_BYTE)v2 )
  {
    sub_43D60((__int64 *)a1 + 4, "loc={");
    v5 = *((int *)a1 + 6);
    v6 = *((_DWORD *)a1 + 6);
    if ( v5 >= *((_QWORD *)a1 + 2) )
      goto LABEL_10;
    goto LABEL_5;
  }
  v5 = *((int *)a1 + 6);
  v6 = *((_DWORD *)a1 + 6);
  if ( v5 < *((_QWORD *)a1 + 2) )
  {
LABEL_5:
    v8 = *(_BYTE *)(*((_QWORD *)a1 + 1) + v5);
    *((_DWORD *)a1 + 6) = v6 + 1;
    if ( a2 )
      *(_BYTE *)a2 = v8;
    if ( a1[56] )
      sub_1FAD0((__int64 *)a1 + 4);
    if ( (unsigned __int8)sub_46950((__int64)a1, v3, (__int64 *)(a2 + 8))
      && (unsigned __int8)sub_46950((__int64)a1, v4, (__int64 *)(a2 + 16)) )
    {
      v2 = sub_468D0((__int64)a1, (__int64 *)(a2 + 24), 1);
LABEL_11:
      if ( !a1[56] )
        return v2;
      sub_43C70((__int64 *)a1 + 4, 44, 0);
      v9 = *((_QWORD *)a1 + 5);
      if ( v9 )
      {
        v12 = v9 + 1;
        v11 = v9 + 2;
        v10 = *((_QWORD *)a1 + 4);
        --v9;
        if ( *((_QWORD *)a1 + 6) >= v11 )
          goto LABEL_14;
      }
      else
      {
        v10 = *((_QWORD *)a1 + 4);
        v11 = 3;
        v12 = 2;
        if ( *((_QWORD *)a1 + 6) >= 3u )
        {
LABEL_14:
          *((_QWORD *)a1 + 5) = v11;
          *(_BYTE *)(v10 + v12) = 0;
          *(_WORD *)(*((_QWORD *)a1 + 4) + v9) = 11389;
          return v2;
        }
      }
      v13 = qvector_reserve();
      *((_QWORD *)a1 + 4) = v13;
      v10 = v13;
      goto LABEL_14;
    }
LABEL_10:
    v2 = 0;
    goto LABEL_11;
  }
  return v2;
}

