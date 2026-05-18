void __fastcall sub_CC1F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  int v3; // eax
  int v4; // edx
  Elf64_Rela *v5; // rdx

  if ( *(_BYTE *)(a1 + 16) )
    goto LABEL_8;
  v1 = **(_QWORD **)(a1 + 72);
  if ( v1 )
  {
    if ( ((*(__int64 (**)(void))(v1 + 96))() & 0x1000) == 0 )
    {
      v1 = **(_QWORD **)(a1 + 72);
      goto LABEL_5;
    }
LABEL_8:
    *(_DWORD *)(a1 + 184) = 512;
    return;
  }
LABEL_5:
  v2 = *(__int64 (**)(void))(v1 + 88);
  if ( !v2 )
  {
    v4 = 4096;
    goto LABEL_7;
  }
  v3 = v2();
  v4 = 512;
  if ( v3 <= 31 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 184) = v4;
    return;
  }
  v5 = &stru_10000;
  if ( v3 <= (int)&stru_10000 )
    LODWORD(v5) = v3;
  *(_DWORD *)(a1 + 184) = (_DWORD)v5;
}
