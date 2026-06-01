__int64 __fastcall sub_2B600(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned __int64 *v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rax
  __int128 v8; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-198h]
  __int64 v10; // [rsp+18h] [rbp-190h]
  __int64 v11; // [rsp+20h] [rbp-188h]
  _BYTE v12[320]; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v13; // [rsp+168h] [rbp-40h] BYREF

  v13 = __readfsqword(0x28u);
  v2 = equal_bytes();
  if ( !(_BYTE)v2 )
    return 0;
  v9 = -1;
  v3 = v2;
  v8 = -1;
  v5 = (unsigned __int64 *)v12;
  v10 = 0;
  v11 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v13 != v5 );
  if ( (unsigned int)decode_insn()
    && (v6 = *(_QWORD **)(a1 + 144),
        v7 = sub_80350(v6, &v8, v12),
        (unsigned int)sub_24DD0(v6, (__int64)&v8, v7, nullptr) == 4) )
  {
    sub_2A980(a1, *(_QWORD *)(a2 + 16), 15, 0);
  }
  else
  {
    return 0;
  }
  return v3;
}

