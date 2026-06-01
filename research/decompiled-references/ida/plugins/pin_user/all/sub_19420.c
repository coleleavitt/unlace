__int64 __fastcall sub_19420(__int64 a1, __int64 a2, void *a3, int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  const char *v8; // rdx
  unsigned __int64 v9; // rax
  const char *v10; // rdx
  __int64 v11; // rbx
  bool v13; // zf
  const char *v14; // rax
  _DWORD v15[2]; // [rsp+0h] [rbp-438h] BYREF
  __int64 v16; // [rsp+8h] [rbp-430h]
  unsigned int v17; // [rsp+10h] [rbp-428h] BYREF
  unsigned int n; // [rsp+14h] [rbp-424h]
  _QWORD n_4[132]; // [rsp+18h] [rbp-420h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  n_4[128] = __readfsqword(0x28u);
  v16 = a2;
  v15[1] = a4;
  v15[0] = 8;
  v7 = sub_26290(v5, v15, 16);
  if ( v7 <= 0xF )
    goto LABEL_11;
  if ( v7 != 16 )
    return -1;
  v8 = "?";
  if ( v15[0] <= 0x1Du )
    v8 = off_38B20[v15[0]];
  sub_18640(a1, (__int64)"SENT %s\n", v8);
  *(_BYTE *)(a1 + 1289) = 0;
  v9 = sub_26190(*(_QWORD *)(a1 + 24), &v17, 1032, 0xFFFFFFFFLL);
  if ( v9 <= 0x407 )
  {
LABEL_11:
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v13 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v13 && !*(_BYTE *)(a1 + 81) )
      {
        v14 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v14);
      }
    }
    return -1;
  }
  if ( v9 != 1032 )
    return -1;
  v10 = "?";
  if ( v17 <= 0x1D )
    v10 = off_38B20[v17];
  sub_18640(a1, (__int64)"RECV %s\n", v10);
  if ( v17 != 8 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v11 = n;
  memcpy(a3, n_4, n);
  return v11;
}

