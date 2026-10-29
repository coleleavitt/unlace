__int64 __fastcall sub_46C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // rbx
  char *v4; // rax
  char v5; // dl
  __int64 v6; // rax
  char *v7; // rax
  char v8; // dl
  char *v9; // rax
  char *v10; // rdx
  char v11; // cl
  _BYTE v13[1023]; // [rsp+20h] [rbp-438h] BYREF
  char v14; // [rsp+41Fh] [rbp-39h] BYREF
  char v15; // [rsp+420h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+428h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 24);
  v16 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v3 = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
    v4 = *(char **)(*(_QWORD *)(a1 + 24) + 40LL);
    while ( 1 )
    {
      v5 = *v4++;
      *v3 = v5;
      if ( !v5 )
        break;
      if ( ++v3 == &v14 )
      {
        v14 = 0;
        break;
      }
    }
    getinf();
    if ( get_ea_name() <= 0 )
      goto LABEL_18;
    v6 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(v6 + 5) & 2) != 0 )
    {
      if ( v3 >= &v15 )
        goto LABEL_24;
      v7 = *(char **)(v6 + 48);
      if ( v3 == &v14 )
        goto LABEL_19;
      while ( 1 )
      {
        v8 = *v7++;
        *v3 = v8;
        if ( !v8 )
          break;
        if ( ++v3 == &v14 )
          goto LABEL_19;
      }
    }
    if ( v3 < &v15 )
    {
      v9 = v3 + 1;
      *v3 = 32;
      if ( v3 + 1 < &v15 )
      {
        v10 = nullptr;
        if ( v9 != &v14 )
        {
          do
          {
            v11 = *v10++;
            *v9 = v11;
            if ( !v11 )
              goto LABEL_18;
          }
          while ( ++v9 != &v14 );
        }
      }
LABEL_19:
      v14 = 0;
LABEL_18:
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 136LL))(a2, v13, 0xFFFF);
      return v16 - __readfsqword(0x28u);
    }
    if ( under_debugger )
LABEL_26:
      BUG();
    interr();
LABEL_24:
    if ( !under_debugger )
      interr();
    goto LABEL_26;
  }
  return sub_3E20(a2, (__int64)"end of file");
}

