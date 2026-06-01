__int64 __fastcall sub_111E0(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // edi
  bool (__fastcall *v4)(__int64, _DWORD *, unsigned int); // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  char v14[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 264);
  if ( !v3 )
    return v15 - __readfsqword(0x28u);
  v4 = **(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))a1;
  if ( v4 != sub_DAB0 )
  {
    if ( v4(a1, a2, v3) )
      goto LABEL_16;
    return v15 - __readfsqword(0x28u);
  }
  if ( a2 && *a2 == 3 )
    goto LABEL_15;
  v5 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v5 >= 0 )
  {
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( (unsigned __int64)v3 < *v6 || (unsigned __int64)v3 >= v6[1] )
    {
      --v5;
      v6 -= 4;
      if ( v5 == -1 )
        goto LABEL_10;
    }
    if ( v3 + v6[2] - *v6 != -1 )
    {
LABEL_15:
      if ( qlseek() != -1 )
      {
LABEL_16:
        if ( !(unsigned __int8)qgetenv()
          && ((word_349D0 & 0x2008) != 8
           || (unsigned int)sub_CFC0(1u, (__int64)"HIDECANCEL\nDo you want to process the TLS entries?")) )
        {
          v12 = *(_QWORD *)(a1 + 616);
          v13 = *(_QWORD *)(v12 + 16) & (*(_QWORD *)(a1 + 584) + *(unsigned int *)(a1 + 264));
          if ( *(_WORD *)(a1 + 96) == 523 )
            sub_B150(v12, (__int64)a2, v13, (__int64)v14);
          else
            sub_AD20(v12, (__int64)a2, v13, (__int64)v14);
        }
      }
      return v15 - __readfsqword(0x28u);
    }
  }
LABEL_10:
  if ( v3 < (__int64)(*(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156)) )
    goto LABEL_15;
  if ( !*(_BYTE *)(a1 + 985)
    && (int)sub_CFC0(1u, (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?", v3) <= 0 )
  {
    sub_DA00(
      0,
      (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
      v7,
      v8,
      v9,
      v10,
      v14[0]);
  }
  *(_BYTE *)(a1 + 985) = 1;
  return qlseek();
}
