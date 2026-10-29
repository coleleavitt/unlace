__int64 __fastcall sub_99180(__int64 *a1, __int64 (__fastcall ***a2)(_QWORD, __int64 *), char a3)
{
  __int64 v3; // rax
  char v4; // bp
  _QWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // [rsp+8h] [rbp-160h]
  __int64 v14; // [rsp+10h] [rbp-158h] BYREF
  __int64 v15; // [rsp+18h] [rbp-150h]
  __int64 v16[4]; // [rsp+20h] [rbp-148h] BYREF
  __int128 v17; // [rsp+40h] [rbp-128h]
  __int128 v18; // [rsp+50h] [rbp-118h]
  __int64 v19; // [rsp+60h] [rbp-108h]
  __int128 v20; // [rsp+68h] [rbp-100h]
  __int64 v21; // [rsp+78h] [rbp-F0h]
  __int128 v22; // [rsp+80h] [rbp-E8h]
  __int64 v23; // [rsp+B8h] [rbp-B0h]
  __int128 v24; // [rsp+C0h] [rbp-A8h]
  __int64 v25; // [rsp+D0h] [rbp-98h]
  __int128 v26; // [rsp+D8h] [rbp-90h]
  __int64 v27; // [rsp+F4h] [rbp-74h]
  __int64 v28; // [rsp+FCh] [rbp-6Ch]
  __int64 v29; // [rsp+104h] [rbp-64h]
  unsigned __int64 v30; // [rsp+10Ch] [rbp-5Ch]
  __int64 v31; // [rsp+118h] [rbp-50h]
  unsigned __int64 v32; // [rsp+128h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v3 = a1[28];
  if ( (v3 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v3 == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = (_QWORD *)(&stru_76F8 + 22);
    interr(30478);
  }
  v4 = a3;
  v5 = *(_QWORD **)(*a1 + 16);
  v6 = sub_841F0(v5, v5 + 4, a1 + 28);
  v15 = v7;
  v8 = v6;
  if ( (v6 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v6 == -1 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = operator new(0x20u);
      *(_DWORD *)(v10 + 8) = 1;
      *(_QWORD *)v10 = off_C9528;
      v16[0] = v10;
      *(_OWORD *)(v10 + 16) = 0;
      v29 = 0x80000000LL;
      v16[3] = 0;
      v19 = 0;
      v21 = 0;
      v23 = 0;
      v25 = 0;
      v31 = 0;
      v27 = 0;
      v28 = 0;
      v30 = 0xFFFFFFFF00000000LL;
      v14 = v8;
      v17 = 0;
      v18 = 0;
      v20 = 0;
      v22 = 0;
      v24 = 0;
      v26 = 0;
      if ( sub_98E20(&v14, v16) )
        break;
      sub_1B750((__int64)v16);
    }
    v11 = (**a2)(a2, v16);
    if ( v11 || v4 != 1 )
      break;
    v8 = sub_841F0(v5, v5 + 4, &v14);
    v15 = v12;
    sub_1B750((__int64)v16);
    if ( (v8 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v8 == -1 )
      return 0;
  }
  v13 = v11;
  sub_1B750((__int64)v16);
  return v13;
}
