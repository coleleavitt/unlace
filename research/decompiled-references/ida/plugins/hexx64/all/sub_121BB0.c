__int64 __fastcall sub_121BB0(__int64 a1, char *a2, _DWORD *a3)
{
  __int64 v4; // rdx
  char v5; // al
  _QWORD *v7; // rsi
  unsigned int v8; // r12d
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[3] = __readfsqword(0x28u);
  v4 = *((int *)a2 + 1);
  if ( (_DWORD)v4 == -1 )
    return 0;
  v5 = *a2;
  if ( *(_BYTE *)a1 != 6 )
  {
    v13[0] = 0;
    v13[1] = 0;
    if ( v5 == 15 )
    {
      v7 = *((_QWORD **)a2 + 1);
      if ( v7 )
        goto LABEL_6;
    }
    else if ( (unsigned __int8)sub_1C5030(a2, (__int64)v13) )
    {
      LODWORD(v4) = *((_DWORD *)a2 + 1);
      v7 = v13;
LABEL_6:
      v8 = sub_121AD0(a1, (__int64)v7, v4, a3);
LABEL_7:
      cleanup_argloc();
      return v8;
    }
    v8 = 0;
    goto LABEL_7;
  }
  v8 = 0;
  if ( v5 == 6 )
  {
    v10 = *(int *)(a1 + 4);
    v11 = *((_QWORD *)a2 + 1);
    v12 = *(_QWORD *)(a1 + 8);
    LOBYTE(v8) = v11 >= v12 && v10 != 0;
    if ( (_BYTE)v8 )
    {
      if ( v10 + v12 - 1 >= v11 + v4 - 1 )
      {
        if ( a3 )
          *a3 = v11 - v12;
        return v8;
      }
      return 0;
    }
  }
  return v8;
}

