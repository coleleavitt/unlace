unsigned __int64 __fastcall sub_3FED0(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // r12
  char v6; // al
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  __int64 ph; // rax
  int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // rdi
  _DWORD *v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // [rsp+0h] [rbp-58h]
  int v20; // [rsp+Ch] [rbp-4Ch]
  int v21; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v3 = 0;
  v22 = __readfsqword(0x28u);
  v4 = 0;
  v19 = a1 + 16;
  if ( a2[1] )
  {
    while ( 1 )
    {
      v5 = *a2 + 40 * v4;
      v6 = *(_BYTE *)(v5 + 1);
      if ( v6 == 1 )
      {
        v15 = *(_QWORD *)(a1 + 888);
        v21 = *(unsigned __int16 *)(v5 + 6);
        if ( (unsigned int)sub_3F060(v15, v19, &v21, 1) != -1 )
          goto LABEL_7;
        v6 = *(_BYTE *)(v5 + 1);
      }
      v7 = a2[1];
      if ( v6 == 99 && sub_3FE40(*(_QWORD *)(a1 + 888), v19, *(unsigned __int16 *)(v5 + 6)) )
      {
LABEL_7:
        if ( !a2[1] )
          break;
        v8 = 0;
        do
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 40 * v8 + *a2,
                 v5) )
          {
            *(_BYTE *)(*a2 + 40 * v8 + 1) = 0;
          }
          v9 = a2[1];
          ++v8;
        }
        while ( v8 < v9 );
        v4 = ++v3;
        if ( v3 >= v9 )
          break;
      }
      else
      {
        v4 = ++v3;
        if ( v3 >= v7 )
          break;
      }
    }
  }
  ph = get_ph();
  v11 = *(unsigned __int16 *)(a1 + 40);
  v12 = ph;
  v13 = *(_DWORD *)(ph + 104);
  if ( v11 >= v13 && v11 < *(_DWORD *)(v12 + 108) )
  {
    v20 = *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * (v11 - v13) + 8);
    if ( v20 )
    {
      v16 = &dword_7A240;
      v17 = a1 + 56;
      do
      {
        if ( (*v16 & v20) != 0 && *(_BYTE *)(v17 + 1) > 1u && a2[1] )
        {
          v18 = 0;
          do
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                   a1,
                   *a2 + 40 * v18,
                   v17) )
            {
              *(_BYTE *)(*a2 + 40 * v18 + 1) = 0;
            }
            ++v18;
          }
          while ( v18 < a2[1] );
        }
        v17 += 40;
        ++v16;
      }
      while ( a1 + 296 != v17 );
    }
  }
  return v22 - __readfsqword(0x28u);
}

