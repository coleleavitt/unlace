__int64 __fastcall sub_137980(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // r12d
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // [rsp+8h] [rbp-A0h]
  __int64 v14[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v15; // [rsp+20h] [rbp-88h] BYREF
  __int128 v16; // [rsp+28h] [rbp-80h]
  _QWORD v17[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+58h] [rbp-50h]
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 76);
  v20 = __readfsqword(0x28u);
  v4 = a3;
  LOBYTE(a3) = v3 == 6 || v3 == 1;
  if ( (_BYTE)a3 )
    return 0;
  v5 = a3;
  v14[0] = 0;
  v14[1] = 0;
  v15 = 0;
  v16 = 0;
  sub_1245A0(a1, v14, v4, 0);
  if ( !(unsigned __int8)sub_60DE0(v14, (_QWORD *)(a1 + 80)) || !(unsigned __int8)sub_313DC0(a1 + 96, &v15) )
  {
    if ( sub_A6350(a1, v14, *(_QWORD *)(a1 + 48), 0, 0x201u) )
    {
LABEL_6:
      v8 = j__qalloc_or_throw();
      v9 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 40) = 0;
      *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 56) = 0;
      *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 72) = 0;
      sub_32C520(v8, v9);
      *(_DWORD *)v8 = 4;
      *(_DWORD *)(v8 + 4) |= 0x80u;
      sub_121740(v8 + 32, (unsigned __int8 *)a2);
      sub_121740(v8 + 64, (unsigned __int8 *)v4);
      if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)(v4 + 4) )
      {
        if ( !under_debugger )
          sub_37EEE0(51245);
        BUG();
      }
      sub_9F720(a1, (_QWORD *)v8, 0);
      *(_DWORD *)(a1 + 24) |= 0xA0u;
      v5 = 1;
      goto LABEL_8;
    }
    if ( !(unsigned __int8)sub_60E40(v14) || (_QWORD)v16 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      v17[0] = 0;
      v17[1] = 0;
      v11 = *(_QWORD *)(v10 + 128);
      v12 = *(_QWORD *)(v10 + 1440);
      v19 = 0;
      v18 = 0;
      if ( v11 + v12 - 1 >= v12 )
      {
        v13 = v11;
        v18 = qvector_reserve();
        *(__m128i *)(v18 + 16 * v19) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v13);
        *(_QWORD *)&v19 = v19 + 1;
      }
      if ( !(unsigned __int8)sub_60DE0(v14, v17)
        || !(unsigned __int8)sub_313DC0(&v18, &v15)
        || *(_DWORD *)(a1 + 376) != 1
        || *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 != **(_DWORD **)(a1 + 368) )
      {
        sub_90100((__int64)v17);
        goto LABEL_6;
      }
      sub_90100((__int64)v17);
    }
  }
LABEL_8:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  qfree();
  return v5;
}

