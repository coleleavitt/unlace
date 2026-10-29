__int64 __fastcall sub_208300(_QWORD *a1, int a2, int a3, double a4)
{
  char v4; // r12
  __int64 v5; // rax
  __int64 *v6; // r14
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v14; // rdi
  __int64 *v15; // [rsp+0h] [rbp-88h]
  unsigned __int64 v16; // [rsp+10h] [rbp-78h] BYREF
  char v17; // [rsp+18h] [rbp-70h]
  int v18; // [rsp+1Ch] [rbp-6Ch]
  __int64 (__fastcall **v19)(); // [rsp+20h] [rbp-68h] BYREF
  __m128i *v20; // [rsp+28h] [rbp-60h]
  unsigned __int64 v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v4 = 2;
  v5 = a1[7];
  v6 = (__int64 *)a1[9];
  v23 = __readfsqword(0x28u);
  v22 = a2;
  v8 = *(_QWORD *)(v5 + 1504);
  v19 = off_4DEED0;
  v9 = (__int64 *)a1[10];
  v20 = nullptr;
  v21 = 0;
  v15 = v9;
  if ( !(unsigned int)sub_104E40(v6, v8, &v19, 7) )
  {
    v4 = 0;
    if ( !(unsigned int)sub_104E40(v15, v8, &v19, 7) )
      return 1;
    v6 = (__int64 *)a1[10];
    v15 = v6;
  }
  v10 = *(_QWORD *)a1[8] + 104LL * a2;
  if ( *(_DWORD *)v10 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCA9Cu, a4);
    goto LABEL_20;
  }
  v11 = *(_QWORD *)(v10 + 8);
  if ( *(_BYTE *)(v21 + 32) != 5 )
    sub_201340(a4);
  v12 = *(_QWORD *)(v21 + 24);
  if ( *(_DWORD *)(v21 + 40) && v11 >= v12 && *(int *)(v21 + 40) + v12 - 1 >= v11 + a3 - 1 )
  {
    if ( (*(_BYTE *)(v21 + 48) & 4) != 0 )
      return 1;
    if ( !under_debugger )
      sub_383060(0xCB02u, a4);
LABEL_20:
    BUG();
  }
  v17 = 5;
  v16 = v11;
  v18 = a3;
  if ( (unsigned int)sub_202CA0((__int64)a1, v6, v15, v20, v21, (__int64)&v16, a4, v4) )
    return 1;
  v14 = (_QWORD *)a1[7];
  if ( (*(_BYTE *)(v14[187] + 604LL) & 0x10) != 0 )
    sub_1F08B0(v14, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
  return 0;
}

