__int64 __fastcall sub_554E0(_QWORD *a1, __int64 a2, _DWORD *a3, char a4)
{
  _DWORD *v4; // rbx
  _QWORD *v7; // rsi
  bool v8; // zf
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-48h] BYREF
  __int128 v16; // [rsp+10h] [rbp-40h]
  unsigned __int64 v17; // [rsp+20h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  *(_DWORD *)a2 = 0;
  v7 = nullptr;
  v8 = *a3 == 1;
  v15 = 0;
  v16 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v4 = *((_DWORD **)a3 + 1);
      if ( v4[68] != 1 || a4 && v4[96] == 5 )
      {
        if ( v4[68] == 3 && v4 )
          *(_DWORD *)a2 = (unsigned int)(*(_DWORD *)a2 - 2) < 2 ? 3 : 1;
LABEL_15:
        *a1 = a3;
        LOBYTE(v4) = *a3 != 0;
        goto LABEL_16;
      }
      v9 = &v7[v16];
      if ( v7 != v9 )
      {
        v10 = v7;
        while ( v4 != (_DWORD *)*v10 )
        {
          if ( v9 == ++v10 )
            goto LABEL_10;
        }
        if ( v9 != v10 )
          break;
      }
LABEL_10:
      if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
      {
        v15 = qvector_reserve(&v15, v7, v16 + 1, 8);
        v9 = (_QWORD *)(v15 + 8 * v16);
      }
      *v9 = v4;
      v11 = v4[96];
      *(_QWORD *)&v16 = v16 + 1;
      if ( (unsigned int)(v11 - 1) <= 1 )
      {
        *(_DWORD *)a2 = (unsigned int)(*(_DWORD *)a2 - 2) < 2 ? 3 : 1;
      }
      else if ( v11 == 6 && (*(_DWORD *)a2 & 0xFFFFFFFD) == 0 )
      {
        *(_DWORD *)a2 = 2;
        v13 = sub_81CE0(v4 + 104);
        v14 = *(_QWORD *)(a2 + 8);
        if ( v14 == -1 )
          *(_QWORD *)(a2 + 8) = v13;
        else
          *(_QWORD *)(a2 + 8) = v13 * v14;
      }
      v7 = (_QWORD *)v15;
      a3 = v4 + 98;
      if ( v4[98] != 1 )
        goto LABEL_15;
    }
    LODWORD(v4) = 0;
LABEL_16:
    if ( v7 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v7);
    }
  }
  else
  {
    *a1 = a3;
    LOBYTE(v4) = *a3 != 0;
  }
  return (unsigned int)v4;
}

