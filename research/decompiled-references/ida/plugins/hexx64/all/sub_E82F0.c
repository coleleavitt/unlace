__int64 __fastcall sub_E82F0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int128 v8; // rdi
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v14[2]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v15; // [rsp+20h] [rbp-50h]
  __int128 v16; // [rsp+28h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v4 = 0;
  v17 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) == *(_DWORD *)(*(_QWORD *)(a1[2] + 112) + 80LL) )
  {
    *(_QWORD *)&v8 = *a1;
    *((_QWORD *)&v8 + 1) = v14;
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    v16 = 0;
    sub_123EA0(v8, a4, 0, 0xFFFF0000);
    v10 = sub_129150(*a1, v14, a3, 0, 0, 0, 0x101u);
    if ( v10 )
    {
      if ( *(_DWORD *)v10 == 4 )
      {
        LOBYTE(v11) = sub_125B60((unsigned __int8 *)(v10 + 64), a4, 0);
        v4 = v11;
        if ( (_BYTE)v11 && *(_BYTE *)(v10 + 32) == 10 && (v12 = *(_QWORD *)(v10 + 40), *(_BYTE *)v12 == 5) )
          *a2 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        else
          v4 = sub_E82F0(a1, a2, *(_QWORD *)(v10 + 16), v10 + 32);
      }
    }
    else
    {
      v4 = 0;
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    qfree(v14[0]);
  }
  return v4;
}

