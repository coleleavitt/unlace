unsigned __int64 __fastcall sub_2651E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  char *v5; // rax
  char v6; // dl
  _BYTE *v7; // r15
  int v8; // ebx
  _BYTE v10[1023]; // [rsp+20h] [rbp-448h] BYREF
  char v11; // [rsp+41Fh] [rbp-49h] BYREF
  _BYTE v12[8]; // [rsp+420h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+428h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  tag_addr();
  v4 = (__int64)v10;
  v5 = nullptr;
  do
  {
    v6 = *v5++;
    *(_BYTE *)v4 = v6;
    if ( !v6 )
    {
      v7 = &v12[-v4];
      goto LABEL_6;
    }
    ++v4;
  }
  while ( (char *)v4 != &v11 );
  v11 = 0;
  v7 = &byte_1;
LABEL_6:
  v8 = sub_265140(a3[5], v4, (__int64)v7, *(_DWORD *)(a1 + 12));
  (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _BYTE *))*a3)(a3, 0, &unk_41315F, v10);
  sub_262B00((void **)a1, a2, v8, 0, byte_413150, a3, 0x49u);
  return v13 - __readfsqword(0x28u);
}

