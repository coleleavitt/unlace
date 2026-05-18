__int64 __fastcall sub_123390(__int64 a1, char *a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned int v7; // ecx
  int v8; // eax
  bool v9; // zf
  int v10; // r8d
  const char *v11; // rcx
  int v12; // r14d
  int v13; // eax
  int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  __int64 *v17; // rax
  __int64 *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rsi
  __m128i *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  _DWORD *v25; // rdx
  int v27; // eax
  char v28; // al
  __int64 *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 *v31; // [rsp+8h] [rbp-70h]
  __int64 *v32; // [rsp+8h] [rbp-70h]
  char v33[4]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+14h] [rbp-64h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  int v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 48);
  v38 = __readfsqword(0x28u);
  if ( v2 )
  {
    return 0;
  }
  else
  {
    v3 = *((_DWORD *)a2 + 1);
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *((_QWORD *)a2 + 4);
    if ( (v3 & 0x2000000) != 0 )
    {
      sub_E8800(a1, 0, "REUSE SUBQUERY %d", *(_DWORD *)(v6 + 16));
      sub_E1710(v5, 9, *((_DWORD *)a2 + 17), *((_DWORD *)a2 + 16), 0);
      return *((unsigned int *)a2 + 11);
    }
    else
    {
      *((_DWORD *)a2 + 1) = v3 | 0x2000000;
      v7 = *(_DWORD *)(a1 + 56) + 1;
      *(_DWORD *)(a1 + 56) = v7;
      *((_DWORD *)a2 + 17) = v7;
      v8 = sub_E1710(v5, 74, 0, v7, 0);
      v9 = (a2[4] & 0x20) == 0;
      *((_DWORD *)a2 + 16) = v8 + 1;
      if ( v9 )
      {
        v27 = sub_E1710(v5, 14, 0, 0, 0);
        v11 = "CORRELATED ";
        v12 = v27;
        v10 = *(_DWORD *)(v6 + 16);
        if ( v27 )
          v11 = "";
      }
      else
      {
        v10 = *(_DWORD *)(v6 + 16);
        v11 = "CORRELATED ";
        v12 = 0;
      }
      sub_E8800(a1, 1, "%sSCALAR SUBQUERY %d", v11, v10);
      v13 = 1;
      if ( *a2 == -118 )
        v13 = **(_DWORD **)(v6 + 32);
      v14 = *(_DWORD *)(a1 + 56);
      v37 = 0;
      v35 = 0;
      v36 = 0;
      v15 = v14 + 1;
      v16 = v13 + v14;
      *(_DWORD *)(a1 + 56) = v16;
      v9 = *a2 == -118;
      v34 = v15;
      if ( v9 )
      {
        v33[0] = 10;
        HIDWORD(v35) = v15;
        v36 = v13;
        sub_E1710(v5, 75, 0, v15, v16);
      }
      else
      {
        v33[0] = 3;
        sub_E1710(v5, 71, 0, v15, 0);
      }
      v30 = *(_QWORD *)a1;
      if ( *(_QWORD *)(v6 + 96) )
      {
        v17 = sub_DEEF0(*(_QWORD *)a1, 155, "0");
        v18 = v17;
        if ( v17 )
        {
          *((_BYTE *)v17 + 1) = 67;
          v19 = 0;
          v20 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 16LL);
          if ( v20 )
          {
            v31 = v17;
            v21 = sub_DD6E0(v30, v20, 0, nullptr);
            v18 = v31;
            v19 = (__int64)v21;
          }
          v18 = sub_F04A0((__int64 *)a1, 52, v19, (__int64)v18);
        }
        v22 = *(_QWORD *)(v6 + 96);
        v23 = *(_QWORD *)(v22 + 16);
        if ( v23 )
        {
          v32 = v18;
          sub_D7720(v30, v23);
          v22 = *(_QWORD *)(v6 + 96);
          v18 = v32;
        }
        *(_QWORD *)(v22 + 16) = v18;
      }
      else
      {
        v29 = sub_DEEF0(v30, 155, "1");
        *(_QWORD *)(v6 + 96) = sub_F04A0((__int64 *)a1, 148, (__int64)v29, 0);
      }
      *(_DWORD *)(v6 + 8) = 0;
      if ( (unsigned int)sub_11F190(a1, v6, v33) )
      {
        v28 = *a2;
        *a2 = -74;
        a2[2] = v28;
      }
      else
      {
        v2 = v34;
        *((_DWORD *)a2 + 11) = v34;
        if ( v12 )
        {
          v24 = *(_DWORD *)(v5 + 144);
          if ( v12 < 0 )
            v12 = v24 - 1;
          v25 = &unk_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
            v25 = (_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v12);
          v25[2] = v24;
        }
        sub_E1710(v5, 67, *((_DWORD *)a2 + 17), *((_DWORD *)a2 + 16), 1u);
        *(_BYTE *)(a1 + 31) = 0;
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
  return v2;
}
