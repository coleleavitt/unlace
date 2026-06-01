__int64 __fastcall sub_26310(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned int v6; // ebx
  _QWORD v8[2]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v9; // [rsp+10h] [rbp-58h] BYREF
  const char *v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v4 = sub_135E0(a1, a2);
  v8[0] = 0;
  v8[1] = 0;
  if ( a2
    && ((v5 = v4, *(_DWORD *)(v4 + 1076)) || a2 != (int)a2 && (!(_DWORD)a2 || (a2 & 7) == 0 && (unsigned int)a2 > 0x100))
    && (unsigned __int8)sub_4EA10(v4 + 864, v8, a2)
    && LOBYTE(v8[0]) == 3
    && a3 >= 0
    && (unsigned __int8)sub_26100((_QWORD *)(v5 + 1040), &v9, a2, a3) )
  {
    v10 = nullptr;
    v11 = 0;
    v6 = sub_19B20(a1, (__int64 *)&v10, v9.m128i_i8);
    if ( !(_BYTE)v6 && (unsigned __int64)v11 > 1 )
      sub_11340((__int64)"%s\n", v10);
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

