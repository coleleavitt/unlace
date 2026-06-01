unsigned __int64 __fastcall sub_3F1DB0(__int64 a1, int a2, double a3)
{
  __int64 v3; // rcx
  __int16 v4; // r13
  __int64 v5; // rax
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r15d
  __int64 v12; // rax
  char v13; // al
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  char v18; // al
  _DWORD *v19; // rdi
  __int64 (__fastcall *v20)(_DWORD *, unsigned int); // rax
  signed int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  char v25; // al
  signed int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // edx
  char v30; // al
  _DWORD *v31; // rdi
  __int64 (__fastcall *v32)(_DWORD *, unsigned int); // rax
  signed int v33; // r15d
  __int64 v34; // rax
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // edx
  signed int v41; // eax
  signed int v42; // eax
  int v43; // ecx
  __int64 v44; // [rsp+0h] [rbp-98h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+10h] [rbp-88h]
  int v47; // [rsp+18h] [rbp-80h]
  int v48; // [rsp+1Ch] [rbp-7Ch]
  int v49; // [rsp+1Ch] [rbp-7Ch]
  __int64 v50; // [rsp+20h] [rbp-78h] BYREF
  int v51; // [rsp+28h] [rbp-70h]
  __int64 v52; // [rsp+2Ch] [rbp-6Ch]
  __int64 v53; // [rsp+40h] [rbp-58h] BYREF
  int v54; // [rsp+48h] [rbp-50h]
  __int64 v55; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 832);
  v4 = *(_WORD *)(a1 + 48);
  v56 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 760);
  if ( !v5
    || (v8 = *(_DWORD *)(*(_QWORD *)(v3 + 752) + 4 * v5 - 4),
        *(_QWORD *)(v3 + 760) = v5 - 1,
        v9 = *(_QWORD *)(a1 + 832),
        v47 = v8,
        (v10 = *(_QWORD *)(v9 + 760)) == 0) )
  {
    sub_3E5460(a3);
  }
  v11 = *(_DWORD *)(*(_QWORD *)(v9 + 752) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 760) = v10 - 1;
  v12 = *(_QWORD *)(a1 + 88);
  v52 = 0x200000000LL;
  v50 = v12;
  v46 = a2;
  if ( v12 )
  {
    if ( (v12 & 0xFFFFFFFFFFFFFF0FLL) == 0 )
    {
      v51 = 8;
      v13 = sub_3E8180(&v50);
      v14 = v51;
      if ( v13 )
      {
        v15 = *(_QWORD *)(a1 + 832);
        v16 = *(int *)(v15 + 60);
        v17 = *(_DWORD *)(v15 + 84);
        if ( v4 == 544 )
          sub_1D1F50(a1, 4u, v17, v16, 0x3BEA45E214ADDC55LL, v8, 0);
        else
          sub_1D1F50(a1, 0xCu, v17, v16, v46, v8, 0);
        sub_3EC710(a1, 16, 0, v11, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
        v45 = v11;
        sub_1D1F50(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v8, v11, v8, 0);
        sub_3EC710(a1, 4, 0, v11, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
        v48 = v11;
        do
        {
          v19 = *(_DWORD **)(a1 + 832);
          v20 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v19 + 168LL);
          if ( v20 == sub_3E5480 )
          {
            v21 = sub_3E5480(v19, v14);
          }
          else
          {
            v41 = v20(v19, v14);
            v19 = *(_DWORD **)(a1 + 832);
            v21 = v41;
          }
          sub_1D1F50(a1, 0xDu, v19[21], v8, v45, v8, 0);
          v22 = *(_QWORD *)(a1 + 832);
          if ( v4 == 544 )
          {
            sub_3EAB70(a1, 1u, 4, v21, *(int *)(v22 + 64), v8, *(_DWORD *)(v22 + 84));
          }
          else
          {
            sub_3EAB70(a1, 2u, 4, *(int *)(v22 + 64), v8, v21, *(_DWORD *)(v22 + 84));
            sub_3EE280(a1, 4u, v21);
          }
          v51 = v14;
          v18 = sub_3E8180(&v50);
          v14 = v51;
        }
        while ( v18 );
        v11 = v48;
      }
    }
  }
  v23 = sub_CBD70();
  v24 = *(_QWORD *)(a1 + 168);
  if ( v23 == 2 )
  {
    v53 = *(_QWORD *)(a1 + 168);
    v55 = 0x400000000LL;
    if ( !v24 )
      goto LABEL_30;
    if ( (~(_DWORD)v24 & 0x80010000) != 0 )
    {
      v26 = bitcountr_zero();
      if ( v26 > 63 )
      {
        v26 = -1;
      }
      else if ( v26 == 28 && (v24 & 0x10000000) != 0 && (v24 & 0x28000000) == 0 )
      {
        if ( (v24 & 0x40000000) != 0 )
        {
          v26 = 30;
        }
        else if ( (int)v24 < 0 )
        {
          v26 = 31;
        }
      }
    }
    else
    {
      v43 = 30;
      while ( (v24 & (1LL << v43)) != 0 )
      {
        if ( --v43 == 0x7FFFFFFF )
        {
          v26 = 0x80000000;
          goto LABEL_20;
        }
      }
      v26 = v43 + 1;
    }
  }
  else
  {
    v53 = *(_QWORD *)(a1 + 168);
    v55 = 0x300000000LL;
    if ( !v24 )
      goto LABEL_30;
    if ( (v24 & 0xFFFFFFFF3F00FF0FLL) != 0 )
      goto LABEL_30;
    v54 = 32;
    v25 = sub_3E8180(&v53);
    v26 = v54;
    if ( !v25 )
      goto LABEL_30;
  }
LABEL_20:
  v27 = *(_QWORD *)(a1 + 832);
  v28 = *(int *)(v27 + 60);
  v29 = *(_DWORD *)(v27 + 84);
  if ( v4 == 544 )
    sub_1D1F50(a1, 4u, v29, v28, 0x3BEA45E214ADDC55LL, v8, 0);
  else
    sub_1D1F50(a1, 0xCu, v29, v28, v46, v8, 0);
  sub_3EC710(a1, 4, 2, v11, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
  v49 = v11;
  v44 = v11;
  do
  {
    v31 = *(_DWORD **)(a1 + 832);
    v32 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v31 + 168LL);
    if ( v32 == sub_3E5480 )
    {
      v33 = sub_3E5480(v31, v26);
    }
    else
    {
      v42 = v32(v31, v26);
      v31 = *(_DWORD **)(a1 + 832);
      v33 = v42;
    }
    sub_1D1F50(a1, 0xDu, v31[21], v47, v44, v47, 0);
    v34 = *(_QWORD *)(a1 + 832);
    v35 = *(_DWORD *)(v34 + 84);
    v36 = *(int *)(v34 + 64);
    if ( v4 == 544 )
    {
      sub_3EAB70(a1, 1u, 4, v33, v36, v47, v35);
    }
    else
    {
      sub_3EAB70(a1, 2u, 4, v36, v47, v33, v35);
      sub_3EE280(a1, 4u, v33);
    }
    v54 = v26;
    v30 = sub_3E8180(&v53);
    v26 = v54;
  }
  while ( v30 );
  v11 = v49;
LABEL_30:
  sub_3E8540(*(_QWORD *)(a1 + 832), v47);
  sub_3E8540(*(_QWORD *)(a1 + 832), v11);
  v37 = *(_QWORD *)(a1 + 832);
  v38 = *(int *)(v37 + 60);
  v39 = *(_DWORD *)(v37 + 84);
  if ( v4 == 544 )
  {
    sub_1D1F50(a1, 0xDu, v39, v38, v46, *(int *)(v37 + 60), 0);
    return sub_3EE280(a1, *(int *)(*(_QWORD *)(a1 + 832) + 84LL), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL));
  }
  else
  {
    sub_1D1F50(a1, 0xCu, v39, v38, v46, *(int *)(v37 + 60), 0);
    sub_3EE280(a1, *(int *)(*(_QWORD *)(a1 + 832) + 84LL), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL));
    if ( v4 == 1738 )
      sub_3EAB70(
        a1,
        0x3Au,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
        0x3BEA45E214ADDC55LL,
        0x3BEA45E214ADDC55LL,
        0x3BEA45E214ADDC55LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    return v56 - __readfsqword(0x28u);
  }
}

