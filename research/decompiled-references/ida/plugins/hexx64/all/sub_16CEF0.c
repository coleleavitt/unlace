__int64 __fastcall sub_16CEF0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7, __m128 a8)
{
  unsigned int v9; // r14d
  __int64 *v11; // rdi
  int v12; // eax
  __int64 v13[2]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-90h]
  __int128 v15; // [rsp+18h] [rbp-88h]
  _QWORD v16[3]; // [rsp+30h] [rbp-70h] BYREF
  char v17; // [rsp+48h] [rbp-58h]
  __int64 v18; // [rsp+50h] [rbp-50h]
  char v19; // [rsp+58h] [rbp-48h]
  __int64 v20; // [rsp+60h] [rbp-40h]
  __int64 v21; // [rsp+68h] [rbp-38h]
  int v22; // [rsp+70h] [rbp-30h]
  unsigned __int64 v23; // [rsp+78h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  v21 = a2;
  v22 = a4;
  v16[1] = 0;
  v16[2] = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v16[0] = &off_4DDDA0;
  v20 = a3;
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  sub_127FE0(a1, v13, a3, 0, a5, a6, 0.0, a8);
  if ( (unsigned int)sub_129C50((_QWORD *)a1, v13, *(_QWORD *)(a1 + 48), 0, (__int64)v16, 0.0, a8)
    || !*(_QWORD *)(a2 + 8) )
  {
    goto LABEL_3;
  }
  v9 = sub_64880(v13);
  if ( !(_BYTE)v9 || (_QWORD)v15 )
  {
    v11 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( !v11 )
    {
LABEL_3:
      v9 = 0;
      goto LABEL_4;
    }
    LOBYTE(v12) = sub_17C4E0(v11, (__int64)v13, *(_DWORD *)(a1 + 72), 0xFFFFFFFF, 0, 0, 2u, 1u);
    v9 = v12 ^ 1;
  }
LABEL_4:
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  qfree(v13[0]);
  return v9;
}

