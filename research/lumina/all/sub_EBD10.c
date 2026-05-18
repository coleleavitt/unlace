__int64 __fastcall sub_EBD10(_DWORD *a1, __int64 a2, char **a3, __int64 a4, unsigned int a5)
{
  int v7; // ebp
  unsigned int v9; // r12d
  char v10; // al
  __int64 v12; // rax
  char *v13; // rdi
  char v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // eax
  char *v18; // rdx
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( (unsigned int)a2 > a1[16] )
  {
    v9 = 11;
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      68976,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  }
  else
  {
    v7 = a2;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 272LL))(
           *(_QWORD *)a1,
           a2,
           v19,
           a5);
    if ( v9 )
      goto LABEL_3;
    v12 = v19[0];
    v13 = *(char **)(v19[0] + 16LL);
    *a3 = v13;
    v14 = *v13;
    if ( *v13 )
      goto LABEL_16;
    v15 = *(_QWORD *)(v12 + 16);
    if ( (_DWORD)a2 != *(_DWORD *)(v15 + 4) )
    {
      v16 = *(_QWORD *)(v12 + 8);
      *(_QWORD *)(v15 + 112) = v12;
      *(_QWORD *)(v15 + 72) = a1;
      *(_DWORD *)(v15 + 4) = v7;
      if ( v7 == 1 )
        v14 = 100;
      *(_QWORD *)(v15 + 80) = v16;
      *(_BYTE *)(v15 + 9) = v14;
      v13 = *a3;
    }
    v17 = sub_EBBD0((__int64)v13);
    if ( !v17 )
    {
LABEL_16:
      if ( !a4 || *((_WORD *)*a3 + 12) && (*a3)[1] == *(_BYTE *)(a4 + 85) )
        return v9;
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        68997,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      v18 = *a3;
      v9 = 11;
      if ( !*a3 )
        goto LABEL_4;
    }
    else
    {
      v18 = *a3;
      v9 = v17;
      if ( !*a3 )
        goto LABEL_3;
    }
    sub_C36A0(*((_QWORD *)v18 + 14));
  }
LABEL_3:
  if ( a4 )
  {
LABEL_4:
    v10 = *(_BYTE *)(a4 + 84) - 1;
    *(_BYTE *)(a4 + 84) = v10;
    *(_QWORD *)(a4 + 136) = *(_QWORD *)(a4 + 8LL * v10 + 144);
  }
  return v9;
}
