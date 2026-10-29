__int64 __fastcall sub_173290(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  bool v4; // zf
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rbp
  _QWORD v9[6]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  char v14; // [rsp+58h] [rbp-50h]
  unsigned __int8 *v15; // [rsp+60h] [rbp-48h]
  _QWORD *v16; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+70h] [rbp-38h]
  char v18; // [rsp+74h] [rbp-34h]
  unsigned __int64 v19; // [rsp+78h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  sub_1201C0((__int64)v9, a1, (__int64)a3, 0);
  v10[1] = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v16 = v9;
  v4 = *(_DWORD *)a3 == 8;
  v15 = a3;
  v17 = 0;
  v18 = 0;
  v11 = a1;
  v10[0] = off_4B0920;
  if ( !v4
    && (LOBYTE(v5) = sub_1216D0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), (unsigned int *)a2, 0),
        v6 = v5,
        (_BYTE)v5)
    && *((_DWORD *)v15 + 17) == *(_DWORD *)(a2 + 68) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 1504LL);
    sub_120CC0(a2 + 32, v15 + 64);
    sub_16E6C0(v8, a2);
  }
  else
  {
    v17 = 0;
    v6 = 0;
    if ( !(unsigned int)sub_11A440((_BYTE *)a2, (__int64)v10) )
      LOBYTE(v6) = v17 > 0;
  }
  if ( v9[2] )
  {
    v9[3] = 0;
    qfree();
  }
  qfree();
  return v6;
}

