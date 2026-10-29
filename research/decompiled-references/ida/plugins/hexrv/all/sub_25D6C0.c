__int64 __fastcall sub_25D6C0(
        __int64 a1,
        unsigned int a2,
        void (__fastcall ***a3)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *),
        unsigned __int8 a4)
{
  char *v6; // rbx
  char *v7; // rax
  char v8; // dl
  __int64 v9; // rax
  void *v10; // r9
  const char *v11; // rbx
  _BYTE v13[19]; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+33h] [rbp-45h] BYREF
  char v15; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  tag_addr();
  v6 = v13;
  v7 = nullptr;
  while ( 1 )
  {
    v8 = *v7++;
    *v6 = v8;
    if ( !v8 )
      break;
    if ( ++v6 == &v14 )
    {
      v14 = 0;
      goto LABEL_5;
    }
  }
  if ( v6 >= &v15 )
  {
    if ( !under_debugger )
      sub_37DDE0(519);
    BUG();
  }
LABEL_5:
  v9 = *(int *)(a1 + 8);
  *v6 = 0;
  v10 = &unk_3F421A;
  v11 = (const char *)*(&off_4B2D60 + 2 * v9);
  if ( !a4 )
    v10 = &unk_3F3793;
  (**a3)(a3, a2, &unk_3F40C9, v13, v11, v10);
  return a4 + a2 + (unsigned int)strlen(v11);
}

