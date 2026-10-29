__int64 __fastcall sub_174A50(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r15
  unsigned __int8 *v15; // r9
  __int64 v16; // rdi
  __int64 (*v17)(); // rax
  int v18; // eax
  int v19; // eax
  _QWORD v22[2]; // [rsp+30h] [rbp-A0h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-90h] BYREF
  __int64 v24; // [rsp+50h] [rbp-80h] BYREF
  __int128 v25; // [rsp+58h] [rbp-78h]
  __int64 v26[2]; // [rsp+70h] [rbp-60h] BYREF
  __int64 v27; // [rsp+80h] [rbp-50h] BYREF
  __int128 v28; // [rsp+88h] [rbp-48h]
  unsigned __int64 v29; // [rsp+98h] [rbp-38h]

  v5 = 0;
  v29 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v7 = *(_DWORD *)(a3 + 72);
    v23[0] = 0;
    v23[1] = 0;
    v24 = 0;
    v25 = 0;
    sub_103D60(a2, a1, v23);
    if ( *(_QWORD *)(a2 + 8) <= 1u )
    {
      v19 = **(_DWORD **)a2;
      if ( !v19 || v7 == v19 )
        v5 = 0;
      else
        v5 = sub_173720(a1, v7, a2, v23, 0.0) ^ 1;
    }
    else
    {
      v22[1] = 0;
      v8 = 0;
      v22[0] = 0xFFFFFFFF00000000LL;
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(a3 + 64);
        v11 = *(unsigned int *)(*(_QWORD *)a2 + 4 * v9);
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 64) )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, 0.0);
          BUG();
        }
        v12 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v11);
        v26[0] = 0;
        v26[1] = 0;
        v27 = 0;
        v13 = *(_QWORD *)(v12 + 56);
        v28 = 0;
        v14 = sub_129150(v12, v23, v13, 0, (__int64)v26, 0, 0.0, a5, 0x101u);
        if ( !v14 )
          break;
        if ( *(_DWORD *)v14 != 4 )
          break;
        if ( !(unsigned __int8)sub_64820(v23, v26) )
          break;
        if ( !(unsigned __int8)sub_317F40(&v27, (__int64)&v24) )
          break;
        v15 = (unsigned __int8 *)(v14 + 32);
        if ( (*(_BYTE *)(v14 + 32) & 0xF7) != 2 )
        {
          v16 = *(_QWORD *)(a1 + 920);
          v17 = *(__int64 (**)())(*(_QWORD *)v16 + 32LL);
          if ( v17 == sub_7A3D0 )
            break;
          v18 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))v17)(v16, a1, v14 + 32, 0, 0);
          v15 = (unsigned __int8 *)(v14 + 32);
          if ( v18 != 2 )
            break;
        }
        if ( LOBYTE(v22[0]) )
        {
          if ( !sub_125B60((unsigned __int8 *)v22, (__int64)v15, 0, 0.0) )
            break;
        }
        else
        {
          sub_125180((unsigned __int8 *)v22, v15);
        }
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree(v27);
        }
        ++v8;
        qfree(v26[0]);
        v9 = v8;
        if ( (unsigned __int64)v8 >= *(_QWORD *)(a2 + 8) )
        {
          v5 = sub_173720(a1, v7, a2, v23, 0.0) ^ 1;
          goto LABEL_12;
        }
      }
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
      v5 = 0;
      qfree(v26[0]);
LABEL_12:
      sub_11CDA0((__int64)v22);
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
    qfree(v23[0]);
  }
  return v5;
}

