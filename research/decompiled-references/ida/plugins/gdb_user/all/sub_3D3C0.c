__int64 __fastcall sub_3D3C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  int v10; // eax
  void *v11; // rdi
  int v13; // eax
  unsigned __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // r15
  void *v17; // rdi
  int v20; // [rsp+3Ch] [rbp-7Ch] BYREF
  void *src; // [rsp+40h] [rbp-78h] BYREF
  __int128 v22; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+60h] [rbp-58h] BYREF
  __int128 v24; // [rsp+68h] [rbp-50h]
  unsigned __int64 v25; // [rsp+78h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v8 = qword_6A770;
  if ( qword_6A770 <= 0 )
  {
    v8 = *(_QWORD *)(a1 + 200);
    if ( v8 <= 0 )
    {
      v8 = *(_QWORD *)(a1 + 192);
      if ( v8 < 399 )
        v8 = 399;
    }
  }
  src = nullptr;
  v22 = 0;
  if ( a3 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( a3 < v8 + v9 )
        v8 = a3 - v9;
      v23 = 0;
      v24 = 0;
      sub_F710(&v23);
      if ( (unsigned int)sub_39C70(a1, &v23) != 1 )
        break;
      v10 = sub_39BC0(a1);
      *(_BYTE *)(a1 + 16) = 0;
      if ( v10 != 1 )
        break;
      if ( !*(_QWORD *)(a1 + 32) )
        break;
      if ( **(_BYTE **)(a1 + 24) != 70 )
        break;
      sub_387C0((_QWORD *)a1, &v20, a6, (__int64 *)&src);
      v13 = v20;
      if ( v20 < 0 )
        break;
      v14 = v22;
      if ( v8 <= (unsigned __int64)v22 )
        v14 = v8;
      if ( v14 < v20 )
      {
        sub_38E60(a1, 0, (__int64)"GDB: Warning: remote GDB stub returned more data than was requested.\n", v20, 0.0);
        v15 = v22;
        if ( v8 <= (unsigned __int64)v22 )
          v15 = v8;
        v20 = v15;
        v13 = v15;
      }
      v16 = v23;
      if ( !v13 )
      {
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree();
        }
LABEL_27:
        v11 = src;
        goto LABEL_13;
      }
      v17 = (void *)(a5 + v9);
      v9 += v13;
      memcpy(v17, src, v13);
      if ( v16 )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      if ( v9 >= a3 )
        goto LABEL_27;
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
    }
    v11 = src;
    LODWORD(v9) = -1;
LABEL_13:
    if ( v11 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  else
  {
    LODWORD(v9) = 0;
  }
  return (unsigned int)v9;
}

