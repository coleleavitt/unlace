unsigned __int64 __fastcall sub_23EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r9
  __int64 v10; // r14
  char v11; // cl
  __int64 v13; // rax
  const char *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  char v17; // [rsp+17h] [rbp-91h]
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v19)(); // [rsp+20h] [rbp-88h] BYREF
  void *v20; // [rsp+28h] [rbp-80h]
  __int128 v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  int v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  char v26; // [rsp+60h] [rbp-48h]
  char v27; // [rsp+61h] [rbp-47h]
  int v28; // [rsp+64h] [rbp-44h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v5 = a1;
  v29 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( (debug & 0x10) == 0 )
      goto LABEL_3;
    v14 = "Undoing dyld slide";
LABEL_13:
    sub_191F0((__int64)"%s, slide=0x%08llX\n", v14, a3);
    v5 = a1;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(a2 + 656);
  if ( !v13 || v13 == 1 && *(_DWORD *)(*(_QWORD *)(a2 + 648) + 32LL) <= 1u )
    return v29 - __readfsqword(0x28u);
  if ( (debug & 0x10) != 0 )
  {
    v14 = "Removing dyld slide info from pointers";
    goto LABEL_13;
  }
LABEL_3:
  v10 = *(_QWORD *)(a4 + 8);
  v20 = nullptr;
  v19 = off_62AC0;
  v11 = *(_BYTE *)(a2 + 773);
  v21 = 0;
  if ( v10 )
  {
    v18 = v5;
    v17 = v11;
    v15 = (void *)qalloc_or_throw();
    v16 = *(const void **)a4;
    *((_QWORD *)&v21 + 1) = v10;
    v20 = v15;
    memcpy(v15, v16, 16 * v10);
    *(_QWORD *)&v21 = v10;
    v5 = v18;
    v11 = v17;
  }
  v25 = a3;
  v23 = -1;
  v22 = 0;
  v19 = off_646F8;
  v24 = v5;
  v26 = v11;
  v27 = a5;
  v28 = 0;
  sub_1BDC0(a2, (__int64)&v19);
  v19 = off_62AC0;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v29 - __readfsqword(0x28u);
}

