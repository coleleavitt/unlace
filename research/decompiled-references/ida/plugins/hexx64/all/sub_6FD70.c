__int64 __fastcall sub_6FD70(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, double a5)
{
  int v5; // ebp
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, int, int); // rax
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v14; // eax
  unsigned __int8 v15; // al
  unsigned __int8 v16; // [rsp+0h] [rbp-68h]
  __int64 v18[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = 0;
  v6 = *(_QWORD *)a1;
  v18[3] = __readfsqword(0x28u);
  if ( (*(int (__fastcall **)(__int64, _QWORD))(v6 + 104))(a1, a4) <= 0 )
    return 0;
  while ( 2 )
  {
    v8 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a4, (unsigned int)v5);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v8, a4) )
      goto LABEL_11;
    v9 = *(__int64 (__fastcall **)(__int64, int, int))(*a2 + 8LL);
    if ( v9 != sub_6BA20 )
    {
      v14 = v9((__int64)a2, v8, a4);
      goto LABEL_17;
    }
    v10 = (_QWORD *)a2[1];
    if ( !v10 )
      goto LABEL_11;
    v11 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v11 )
    {
      v12 = 24;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(*v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      v12 = v11 + 24;
      if ( (int)v8 < *(_DWORD *)(v11 + 24) )
      {
LABEL_15:
        v11 = *(_QWORD *)(v11 + 8);
        goto LABEL_10;
      }
      if ( (_DWORD)v8 == *(_DWORD *)(v11 + 24) )
      {
        if ( (signed int)a4 < *(_DWORD *)(v11 + 28) )
          goto LABEL_15;
        if ( (signed int)a4 <= *(_DWORD *)(v11 + 28) )
          break;
      }
      v11 = *(_QWORD *)(v11 + 16);
LABEL_10:
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_11;
    }
    if ( v10 == (_QWORD *)v11 )
    {
LABEL_11:
      ++v5;
      goto LABEL_12;
    }
LABEL_21:
    v14 = *(_DWORD *)(v12 + 8);
LABEL_17:
    if ( v14 != 3 )
      goto LABEL_11;
    v18[0] = 0;
    v18[1] = 0;
    sub_64190(v18, a4, a5);
    v15 = sub_6FC30(a1, v18, a3, v8, a5);
    if ( !v15 )
    {
      qfree(v18[0]);
      ++v5;
LABEL_12:
      if ( v5 >= (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, a4) )
        return 0;
      continue;
    }
    break;
  }
  v16 = v15;
  qfree(v18[0]);
  return v16;
}

