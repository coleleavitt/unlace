__int64 __fastcall sub_3C720(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v7; // r13
  __int64 name_ea; // rax
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // rax
  const char *v13; // rsi
  char *v14; // rdx
  unsigned int v15; // ebx
  int v17; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __int128 v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( (unsigned __int64)a4 >= a1[3] )
    return 0;
  v4 = a1[2];
  v19 = 0;
  v18 = 0;
  v7 = v4 + 40LL * a4;
  sub_35470(&v18);
  name_ea = get_name_ea();
  if ( name_ea != -1 || (name_ea = get_name_ea(), name_ea != -1) )
  {
    *(_QWORD *)(a2 + 24) = name_ea;
    if ( (unsigned __int8)segtype() == 1 )
    {
      *(_DWORD *)(a2 + 4) |= 2u;
      v9 = *(_DWORD *)(v7 + 32);
      if ( v9 != 2 )
      {
LABEL_6:
        if ( v9 == 3 )
        {
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v7 + 24);
          if ( !*(_BYTE *)(v7 + 37) )
          {
LABEL_12:
            v10 = a1[7];
            v11 = 8;
            if ( !*(_BYTE *)(v10 + 161) )
              v11 = 4;
            v17 = v11;
            v12 = sub_28F70(v10, a3, &v17);
            v13 = s1;
            if ( *(_QWORD *)(v7 + 8) )
              v13 = *(const char **)v7;
            if ( (int)v12 <= 16 )
            {
              v14 = (char *)&loc_106DB + 5;
              if ( _bittest64((const __int64 *)&v14, v12) )
                sub_12240(a3 & *(_QWORD *)(*(_QWORD *)(a1[5] + 8LL) + 16LL), (__int64)v13);
            }
            v15 = 1;
            goto LABEL_20;
          }
LABEL_8:
          make_name_weak();
          goto LABEL_12;
        }
LABEL_11:
        if ( !*(_BYTE *)(v7 + 37) )
          goto LABEL_12;
        goto LABEL_8;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v7 + 32);
      if ( v9 != 2 )
        goto LABEL_6;
    }
    *(_QWORD *)(a2 + 32) = *(int *)(v7 + 24);
    goto LABEL_11;
  }
  v15 = 0;
LABEL_20:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v15;
}

