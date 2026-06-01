unsigned __int64 __fastcall sub_1FF40(__int64 a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rbx
  char **v10; // rbp
  __int64 name_ea; // rsi
  int v12; // ebx
  int v13; // ecx
  const char *v14; // rsi
  __int64 v15; // rsi
  const char *v16; // rsi
  __int64 v17; // rax
  const char *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // ebx
  int v23; // ecx
  const char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r15
  const char *v28; // [rsp+8h] [rbp-60h]
  const char **v29; // [rsp+8h] [rbp-60h]
  const char *v30; // [rsp+10h] [rbp-58h] BYREF
  __int128 v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v32 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) - 10 <= 1 && !*(_DWORD *)(v7 + 4) && (getinf(3) & 6) == 2 )
  {
    v10 = (char **)&off_2EA28;
    do
    {
      v28 = *(v10 - 1);
      name_ea = get_name_ea(-1, v28);
      if ( name_ea != -1 || (name_ea = get_name_ea(-1, v28 + 1), name_ea != -1) )
        ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))*v10)(a1, name_ea, a2, a3);
      v30 = nullptr;
      v12 = 0;
      v31 = 0;
      do
      {
        v13 = v12++;
        sub_8A10((__int64 *)&v30, (__int64)"%s_%d", v28, v13);
        v14 = s1;
        if ( (_QWORD)v31 )
          v14 = v30;
        v15 = get_name_ea(-1, v14);
        if ( v15 == -1 )
        {
          v16 = s1;
          if ( (_QWORD)v31 )
            v16 = v30;
          v15 = get_name_ea(-1, v16 + 1);
          if ( v15 == -1 )
            break;
        }
        ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))*v10)(a1, v15, a2, a3);
      }
      while ( v12 != 10 );
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30);
      }
      v10 += 2;
    }
    while ( v10 != &off_2EAA8 );
    v17 = sub_218C0();
    if ( v17 )
    {
      if ( v17 == -1 )
        return v32 - __readfsqword(0x28u);
    }
    else if ( (unsigned int)getinf(5) == 11 )
    {
      return v32 - __readfsqword(0x28u);
    }
    v29 = (const char **)&off_2EAA0;
    do
    {
      v18 = *v29;
      v19 = get_name_ea(-1, *v29);
      v21 = v19;
      if ( v19 != -1 )
      {
        if ( (get_flags_ex(v19, 4, v20) & 0x600) == 0x400 )
        {
          v31 = 0;
          v30 = nullptr;
          sub_110D0(nullptr, nullptr, (__int64 *)&v30, v21, 6);
          if ( (_QWORD)v31 )
          {
            v21 = *(_QWORD *)v30;
            if ( (unsigned __int8)is_mapped(*(_QWORD *)v30) )
            {
              if ( !get_func(v21) )
                sub_1A480(a1, v21);
            }
          }
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree(v30);
          }
        }
        sub_1F6C0(a1, a2, v21, a3, 0.0, a5, a6);
        v22 = 0;
        v30 = nullptr;
        v31 = 0;
        do
        {
          v23 = v22++;
          sub_8A10((__int64 *)&v30, (__int64)"%s_%d", v18, v23);
          v24 = s1;
          if ( (_QWORD)v31 )
            v24 = v30;
          v25 = get_name_ea(-1, v24);
          v27 = v25;
          if ( v25 == -1 )
            break;
          if ( (get_flags_ex(v25, 4, v26) & 0x600) == 0x400 )
            break;
          sub_1F6C0(a1, a2, v27, a3, 0.0, a5, a6);
        }
        while ( v22 != 10 );
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30);
        }
      }
      ++v29;
    }
    while ( v29 != (const char **)&unk_2EAD0 );
  }
  return v32 - __readfsqword(0x28u);
}
