__int64 __fastcall sub_18EB0(__int64 *a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v1 = 1;
  v11 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a1, 2) & 0x3F) == 0x1D )
    return v1;
  v8[0] = &v9;
  v9 = 0;
  v8[1] = (_QWORD *)(&dword_0 + 2);
  v10 = 0;
  v3 = sub_18970(v8, a1, 0);
  v4 = v9;
  v1 = v3;
  if ( !(_BYTE)v3 )
  {
    if ( !v9 )
      return v1;
    v5 = v10;
    if ( !(_QWORD)v10 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v5 = v10;
  if ( !(_QWORD)v10 )
  {
    v1 = 0;
    if ( !v9 )
      return v1;
    goto LABEL_10;
  }
  if ( (_QWORD)v10 != 1 )
    LOBYTE(v1) = *(_DWORD *)(v9 + 16) == 4;
  if ( v9 )
  {
LABEL_8:
    v6 = 0;
    do
    {
      v7 = v6++;
      clear_tinfo_t(v4 + 16 * v7 + 8);
      v4 = v9;
    }
    while ( v6 != v5 );
LABEL_10:
    *(_QWORD *)&v10 = 0;
    qfree(v4);
  }
  return v1;
}
