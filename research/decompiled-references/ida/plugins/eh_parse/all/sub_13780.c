__int64 __fastcall sub_13780(__int64 a1, __int64 a2, __int64 *a3)
{
  char *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 first_cref_from; // rax
  __int64 v15; // rbx
  __int128 v16; // [rsp+0h] [rbp-188h] BYREF
  __int64 v17; // [rsp+10h] [rbp-178h]
  __int64 v18; // [rsp+18h] [rbp-170h]
  __int64 v19; // [rsp+20h] [rbp-168h]
  char v20; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v21[4]; // [rsp+168h] [rbp-20h] BYREF

  v21[0] = __readfsqword(0x28u);
  v4 = &v20;
  v16 = -1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v21 != (_QWORD *)v4 );
  if ( !(unsigned int)decode_insn(&v16, a2, v21, 0.0)
    || !(unsigned __int8)has_insn_feature(
                           (unsigned __int16)v18,
                           0x4000,
                           v5,
                           v6,
                           v7,
                           v8,
                           v16,
                           *((_QWORD *)&v16 + 1),
                           v17)
    || !(unsigned __int8)has_insn_feature((unsigned __int16)v18, 1, v10, v11, v12, v13, v16, *((_QWORD *)&v16 + 1), v17) )
  {
    return 0;
  }
  first_cref_from = get_first_cref_from(a2);
  v15 = first_cref_from;
  if ( first_cref_from == -1 || (result = is_mapped(first_cref_from), !(_BYTE)result) )
  {
    result = 0;
    v15 = -1;
  }
  if ( a3 )
    *a3 = v15;
  return result;
}

